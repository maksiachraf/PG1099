#include <string.h>
#include <stdio.h>



int main(int argc, char **argv ){
  int c=1;
  int l=1;
  for( int i=1; i<argc; i=i+1) {
    if (strlen(argv[i])>strlen(argv[l])) {
      l = i;
}
    if (strlen(argv[i])<strlen(argv[c])) {
      c = i;
    }
    }
    printf("la chaine la plus longue est : %s\n", argv[l]);
    printf("la chaine la plus courte est : %s\n", argv[c]);
}
