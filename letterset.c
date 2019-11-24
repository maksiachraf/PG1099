#include <stdio.h>
#include <string.h>
int mask(char c) {
  return (1U<<31)>>(c-'a');
}


int setoff(char *s) {
int i = 0;
ens = mask(s[i]);
while (s[i] != 0) {
  ens = ens | mask([i]);
  i=i+1;

}
return ens;


}




int main(int argc, char **argv) {
  char c = 'r';
  printf("%i\n", mask(c));
}
