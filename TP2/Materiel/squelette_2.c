#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STACK_SIZE_MAX 1024

// Instantiation du tableau

int *tab = NULL;
// Ajouter un élément au tableau
void push(int x)
{
// Dépiler le dernier élément du tableau
*tab=x;
tab++;
}

int pop()
{
  tab--;
  return *tab;

}

int main(int argc, const char **argv)
{tab++;

  tab = malloc(STACK_SIZE_MAX*sizeof(int));
  // Lecture des arguments un à un
  for(int i = 1; i < argc; i++){
    switch(*argv[i])
      {
      case '+':
	{
	  // Dépiler et additionner
	  int a = pop();
    int b = pop();
    int c = a + b;
    push(c);
    break;
	}
      case '-':
	{
	  // Dépiler et soustraire
    int a = pop();
    int b = pop();
    int c = b - a;
    push(c);
    break;

	}
      case '*':
	{
	  // Dépiler et multiplier
    int a = pop();
    int b = pop();
    int c = a*b;
    push(c);
    break;

	}
      case '/':
	{
	  // Dépiler et diviser
    int a = pop();
    int b = pop();
    int c = a/b;
    push(c);
    break;
	}
      default:
	// Cas par défaut : on ajoute l'élément au tableau
  push(atoi(argv[i]));
	break;
      }

  }
  // Afficher le résultat
  tab--;
  printf("Résultat : %i\n", *tab);
  return 0;
}
