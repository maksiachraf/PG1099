/*
  Dans l’exemple maxf.c:

  * Rajouter une fonction minTableau() qui retourne la valeur minimale
  * du tableau

  * Rajouter une fonction secondTableau() qui retourne la 2nde valeur
  * la plus grande du tableau (différente de la valeur maximale)

 */

#include <stdio.h>
int max(int a, int b) {
  if (a > b) // Parenthèses OBLIGATOIRES
    return a;
  else
    return b;
}

int maxTableau(int tableau[],
	       int nbElements) {
  int resultat = tableau[0];
  int i = 1;
  while (i < nbElements) { // celles-ci aussi
    resultat = max(resultat, tableau[i]);
    i = i + 1;
  }
  return resultat;
}
int secondmax(int tableau[], int nbElements) {
  int resultat = tableau[0];
  int i = 1;
  int maxs = maxTableau(tableau, nbElements);
  while (i < nbElements) {
    if (tableau[i] != maxs) {
      resultat = max(resultat, tableau[i]);
    }
    i = i + 1;
  }
  return resultat;
}.o : Dans la fonction


int main(int argc, char **argv) {
  int tab[] = {10, 20, 42, 40, 2, 8, 47, 65};
  int res = maxTableau(tab, 8);
  int res_ = secondmax(tab, 8);
  printf("Max du tableau: %i\n", res);
  printf("second max du tableau: %i\n", res_);
  return 0;
}
