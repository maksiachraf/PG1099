#include <stdio.h>
int main(int argc, char **argv) {
  int tab[5] = {12, 14, 10, 20, 50}
  for(int i=0,i<5,i=i+1){
    if(tab[i+1] < tab[i]){
      printf("%i\n",tab[i] );
    else {
      printf("%i\t",tab[i])
    }
    }
  }


}
