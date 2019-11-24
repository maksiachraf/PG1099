#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPH_SIZE 26

#define IS_MAJ(c) ((((c) >= 'A')&&((c) <= 'Z'))?1:0)
#define IS_MIN(c) ((((c) >= 'a')&&((c) <= 'z'))?1:0)

typedef enum {
  CYPHER,
  DECYPHER
} my_mode_t;

void cesar(char *str, int shift)
{
  char sup,inf;

  if (IS_MIN(*str) || IS_MAJ(*str))
    {
      shift %= ALPH_SIZE;
      
      if(IS_MIN(*str))
	inf = 'a';
      else if(IS_MAJ(*str))
	inf = 'A';
      sup = inf + (ALPH_SIZE - 1);
      
      if((*str + shift) < inf)
	shift += ALPH_SIZE;
      if((*str + shift) > sup)
	shift -= ALPH_SIZE;
      
      *str += shift;      
    }
}

int compute_size(char str[])
{
  int size = 0;

  while(*str){
    if((*str == 's') || (*str == 'o'))
      size += 2;
    size++;
    str++;
  }

  return size + 1;
}

void cypher(char *str, int key)
{
  char *base = NULL;
  char *tmp = NULL;
  int size = compute_size(str);
  base = tmp = malloc(size*sizeof(char));
  memset(tmp,0,size*sizeof(char));
    
  while(*str){
    if(*str == 's'){
      memcpy(tmp,"...",4);
      tmp += 3;		
    }
    else if (*str == 'o'){
      memcpy(tmp,"---",4);
      tmp += 3;
    }
    else {
      cesar(str,key);
      *tmp++ = *str;
    }
    str++;
  }
  fprintf(stdout,"%s ",base);
  fflush(stdout);
}

void decypher(char *str, int key)
{
  char *base = NULL;
  char *tmp = NULL;
  int size = strlen(str)+1;

  base = tmp = malloc(size*sizeof(char));
  memset(tmp,0,size*sizeof(char));
  
  while(*str){
    if(strlen(str) > 2){
      if((*str == '.') &&  (*(str+1) == '.') && (*(str+2) == '.')){ 
	*tmp++ = 's';
	str += 3;		
      }
      else if((*str == '-') &&  (*(str+1) == '-') && (*(str+2) == '-')){ 
	*tmp++ = 'o';
	str += 3;
      }
      else {
	cesar(str,key);
	*tmp++ = *str++;
      }
    }
    else {
      cesar(str,key);
      *tmp++ = *str++;
    }
  }	  
  fprintf(stdout,"%s ",base);
  fflush(stdout);
}


int main(int argc, char *argv[])
{
  if(argc > 1) {
    int key = atoi(argv[2]);
    char *str = NULL;
    size_t size = 0;  
    my_mode_t mode;
    
    if( strcmp(argv[1],"-c")==0){
      mode = CYPHER;
      //fprintf(stdout,"Cypher mode : ");
    }
    else if (strcmp(argv[1],"-d")==0){
      mode = DECYPHER;
      //fprintf(stdout,"Decypher mode : ");
    }
    else {
      fprintf(stdout,"Veuillez préciser un mode.");
      goto end;
    }

    getline(&str,&size,stdin);
    if(CYPHER == mode){
      cypher(str,key);
    }
    else if(DECYPHER == mode){
      decypher(str,-key);
    }
  } else {
    fprintf(stdout,"2 arguments au minimum : mode clé_de_chiffrement");
  }

 end:
  fprintf(stdout,"\n");
  exit(EXIT_SUCCESS);
}
