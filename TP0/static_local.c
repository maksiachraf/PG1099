#include <stdio.h>
#include <stdlib.h>


void ma_fonction(int arg)
{
  static int toto = 0;

  ++toto;
  
  fprintf(stdout,"Valeur de la variable (1) : %i\n",toto);

  return;
}

void ma_fonction2(int arg)
{
  static int toto;
  toto = 0;
  
  ++toto;
  
  fprintf(stdout,"Valeur de la variable (2) :   %i\n",toto);

  return;
}

int main(int argc, char **argv)
{
  int index;
  
  for(index = 0 ; index < 10 ; index++){
    ma_fonction(index);
    ma_fonction2(index);
  }
  
  return EXIT_SUCCESS;
}
