#include "parameters.h"

#define PI M_PI
extern double sh[N];

/* champ complexe (X,Y) */
extern double X[N], Xp[N], Xpp[N];
extern double Y[N], Yp[N], Ypp[N];

/* terme non-lineaire */
extern double NXp[N], NXpp[N];
extern double NYp[N], NYpp[N];

extern double F[N]; /* initial forcing */
extern double A[N]; /* coefficients du schema numerique */
extern double A1[N], A2[N], A3[N]; /* coefficients du terme non lineaire */
extern double D[N]; /* echelle de forcage */

extern int N_steps;
extern int N_fs;


void init_NL();
void init_forcing();
void init_shell();
void init_fields();

void compute_NX();
void compute_NY();
void integrate(); 

