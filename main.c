#include <stdio.h>
#include <stdlib.h>

#include "integrate.h"
#include "integrate_io.h"
#include "stats_io.h"
#include "parameters.h"

int main()
{   int i;
    long int count=0;

    init_NL();
    init_forcing();
    init_shell();

    if (DO_CONTINUE) read_fields();
    else             
    {   init_fields();     
        reset_data();
        init_moments();
    }
  
    count=(long int)(time/dt);
    while (count>0)
    {   integrate();
    
        if ((count%N_fs)==0)
        {   printf("remaining steps: %d\n", (int)(count/N_fs));
            if (DO_FIR)
            {   normalize_FIR();
                if (DO_SAVE)        save_data(Xf, Yf);
//                if (DO_MOMENTS)     save_moments(Xf, Yf); 
                if (DO_RECONSTRUCT) save_reconstructed(Xf, Yf, N_steps/fs);
            }
            else
            {   if (DO_SAVE)        save_data(X, Y);
//                if (DO_MOMENTS)     save_moments(X, Y); 
                if (DO_RECONSTRUCT) save_reconstructed(X, Y, N_steps/fs);
            }
            N_steps++;
        }
        
        /* evolve */
        for(i=0; i<N; i++)
        {   Xpp[i] = Xp[i];     Ypp[i] = Yp[i];
            NXpp[i] = NXp[i];   NYpp[i] = NYp[i];
            Xp[i] = X[i];       Yp[i] = Y[i];
        }
        compute_NX(Xp, Yp, NXp);
        compute_NY(Xp, Yp, NYp);

        count--;
    }

    save_fields();
}

