#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAB_SIZE 26


void occurences(char *s, int t[]) // ou void occurences(char *s, int *t)
{
  do {
    if((*s >= 'a') && (*s <= 'z'))
      t[*s - 'a']++ ; //ou (*(t + *s - 'a'))++;
    else if((*s >= 'A') && (*s <= 'Z'))
      t[*s - 'A']++ ; //ou  (*(t + *s - 'A'))++;
  } while(*s++);
}
    
int main(int argc, char **argv)
{
  if (argv[1]){
    int res_tab[TAB_SIZE];
    memset(res_tab,0,TAB_SIZE*sizeof(int));
    
    occurences( argv[1],res_tab);
    
    for(int i = 0; i < TAB_SIZE ; i++)
      if (res_tab[i])
	fprintf(stdout,"%c : %i\n",'a'+i,res_tab[i]);
  }
  
  return EXIT_SUCCESS;
}
