#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  char  toto[] = "salut";
  char  tata[] = {'s','a','l','u','t','\0'};
  char *titi   = "salut";
  char *tutu   = {'s','a','l','u','t','\0'}; //commentaire

  toto[0] = 'r';
  tata[0] = 'r';
  titi[0] = 'r';
  tutu[0] = 'r';

  fprintf(stdout,"%s %s %s %s\n",toto,tata,titi,tutu);

  return EXIT_SUCCESS;
}
