# GOY
GOY model implementation in C, with various tweaks

# installation
- download the full zip/tar and unzip it in some directory
- from there, type "make"

# use
- set the parameters you want in the "parameters.h" file
- run the code by typing "./run"
  depending on your requirements in "parameters.h", several files will becreated, containing
     - the time evolution of ethe various shells
     - the reconstructed velocity signal
     - ...
     
# tips
- it is possible to "continue" a previous run, in order to add more points to either the time evolutions or to some stats.
  this is particularly useful after the transients have vanished.
  
