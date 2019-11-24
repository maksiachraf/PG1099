#define STACK_SIZE_MAX 1024
#include <stdio.h>
#include <string.h>

void push(char tab[],char c) {
  int i=0;
  while (tab[i]=='\0') {
    tab[i]=c;
  }
}

int main(int argc, char *argv[]) {
  char tab[STACK_SIZE_MAX];
  for (int j=1; j<argc; j++) {
    push(tab,argv[j]);
  }
  printf("%s %s %s", tab[0], tab[1], tab[2]);

}
