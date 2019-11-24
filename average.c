#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char **argv) {
  double avg = 0;
  int i=1;
  while (i < argc) {
    avg = avg + atof(argv[i]);
    i = i + 1;
  }
  double ectp = 0;
  i = 1;
  while (i < argc) {
    double xi = atof(argv[i]) - avg;
    ectp = ectp + xi*xi;
    i = i + 1;
  }
  ectp = ectp/(argc-1);
  ectp = sqrt(ectp);
  printf("la moyenne est : %f\n", avg/(argc-1));
  printf("l'écart type est : %f\n", ectp);
}
