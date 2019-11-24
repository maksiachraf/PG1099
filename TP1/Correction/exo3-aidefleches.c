#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


#define WORD_SIZE 64

int main(int argc, char *argv[])
{
  if(argc != 4)
    {
      fprintf(stdout,"Usage : ./prog position_lettre lettre taille_mot\n");
      return 0;
    } else {
    int position = atoi(argv[1]);
    char letter = argv[2][0];
    int size = atoi(argv[3]);
    char str[WORD_SIZE];
    memset(str,0,WORD_SIZE);
    
    while( fgets(str,WORD_SIZE,stdin) != NULL ){
      str[strlen(str)-1] = '\0'; /* remove \n */
      if( (strlen(str) == size) &&
	  (position <= size) &&
	  (str[position-1] == letter))
	fprintf(stdout,"%s\n",str);
      memset(str,0,WORD_SIZE);
    }
  }
  return 0;
}
