#include <stdio.h>
int mystrlen(char *s) {
  int i = 0;
  while (s[i]!='\0') {
    i=i+1;
  }
  return i;

}
int mystrcmp(char *s1, char *s2) {
  int i=0;
  while( s1[i]!='\0' and s2[i]!='\0'){
    if (s1[i] < s2[i]) return ">0";
    if (s2[i] < s1[i]) return "<0";
    i=i+1;
    }
  if (s1[i]=='\0' and s2[i]=='\0') return "=0";
  if (mystrlen(s1)>mystrlen(s2)) return ">0";
  else return "<0";

  }



int main(int argc, char **argv){
  char t[7]="abcdef";
  char b[8]="abcdefa"
  int ln = mystrlen(t);
  printf("la longuer de la chaine est %i\n", ln);
  char=mystrcmp(t,b);
  printf("%s", char);


}
