#include <stdio.h>

int bissextile(int A, char tab) {
  if (A % 4 == 0 && A % 100 != 0) {
    tab[] = "est";
    if (A % 400 == 0) tab[] = "est";
  }
  tab[] = "nest pas";
}
int main(int argc, char **argv) {
  char tab;
  bissextile(atoi(argv[1]), tab);
  printf("%i %s bissextile\n", atoi(argv[1]), tab);
}
