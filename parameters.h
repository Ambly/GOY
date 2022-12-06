/****************************************************************************/
/* this file contains all adaptable parameters                              */
/* Nicolas B. Garnier 2022-07-05                                            */
/****************************************************************************/

/****************************************************************************/
// model parameters:
#define force 0.005 // strength of the random forcing
#define N_force 1   // mode which is forced
#define force_rnd 1 // random forcing (1) or deterministic (0)
#define k0 0.125    // largest scale
#define lmb 2.0     // ratio between consecutive scales
#define eps 0.5     // for the NL coefficients
#define nu 1.e-7    // viscosity
#define N 22        // nb of modes

/****************************************************************************/
// scheme parameters:
#define dt 1.e-4    // for integration scheme 
#define fs 1000.    // for data saving
#define time 1.0e2  // for data saving (you'll get Npts = time*fs per simulation)

/****************************************************************************/
// behavioral paarameters:
#define DO_CONTINUE 1                   // to continue the previous simulation
#define DO_SAVE 1                       // to save time trace of shells
#define DO_MOMENTS 0                    // to compute and save moments
#define DO_STATS 0                      // to compute additional statistics (useless)
#define DO_RECONSTRUCT 1                // to output a "reconstructed" velocity signal

#define MOMENTS_ORDER_MAX 6             // max order of the moments to compute
#define MOMENTS_FILE "moments.dat"      // file name for the moments
#define DATA_FILE "data.dat"            // where to save the main output (shells)
#define RECONSTRUCTED_FILE "v.dat"      // reconstructed velocity field
#define STATS_DIR "stats"               // where to save additional stats
#define DATA_DIR "."                    // ehre to save data