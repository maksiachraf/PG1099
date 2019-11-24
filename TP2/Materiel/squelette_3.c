#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STACK_SIZE_MAX 1024

// Instantiation du tableau

typedef struct Element Element;
struct Element
{
    int nombre;

    Element *suivant;
};


typedef struct Pile Pile;
struct Pile
{
    Element *premier;
};



void push(Pile *pile ,int x)
{

      Element *nouveau = malloc(sizeof(*nouveau));
      if (pile == NULL || nouveau == NULL)
      {
          exit(EXIT_FAILURE);
      }

      nouveau->nombre = x;
      nouveau->suivant = pile->premier;
      pile->premier = nouveau;
}


int pop(Pile *pile)
{
  if (pile == NULL)
   {
       exit(EXIT_FAILURE);
   }

   int nombreDepile = 0;
   Element *elementDepile = pile->premier;

   if (pile != NULL && pile->premier != NULL)
   {
       nombreDepile = elementDepile->nombre;
       pile->premier = elementDepile->suivant;
       free(elementDepile);
   }

   return nombreDepile;
}


int main(int argc, const char **argv)
{  //initialisation de la pile
  Pile *maPile = initialiser();

  // Lecture des arguments un à un
  for(int i = 1; i < argc; i++){
    switch(*argv[i])
      {
      case '+':
	{
	  // Dépiler et additionner
	  int a = pop(maPile);
    int b = pop(maPile);
    int c = a + b;
    push(maPile, c);
    break;
	}
      case '-':
	{
	  // Dépiler et soustraire
    int a = pop(maPile);
    int b = pop(maPile);
    int c = b - a;
    push(maPile,c);
    break;

	}
      case '*':
	{
	  // Dépiler et multiplier
    int a = pop(maPile);
    int b = pop(maPile);
    int c = a*b;
    push(maPile,c);
    break;

	}
      case '/':
	{
	  // Dépiler et diviser
    int a = pop(maPile);
    int b = pop(maPile);
    int c = a/b;
    push(maPile,c);
    break;
	}
      default:
	// Cas par défaut : on ajoute l'élément au tableau
  push(maPile,atoi(argv[i]));
	break;
      }

  }
  // Afficher le résultat
  int R = pop(maPile);
  printf("Résultat : %i\n",R );
  return 0;
}
