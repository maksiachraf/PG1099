#include <stdio.h>
#include <stdlib.h>

int toto = 11;

int ma_fonction(int arg)
{
  int toto = 22;

  fprintf(stdout,"Valeur de la variable : %i\n",toto);

  return toto;
}


int main(int argc, char **argv)
{
  int ret = 0;
  
  fprintf(stdout,"Valeur de la variable : %i\n",toto);
  
  ret = ma_fonction(toto);
  
  return EXIT_SUCCESS;
}
