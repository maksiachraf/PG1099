#include <stdio.h>
#include <stdlib.h>

extern int toto;

int main(int argc, char **argv)
{
  
  fprintf(stdout,"Value : %i\n",toto);

  return 0;
}
