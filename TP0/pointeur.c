#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define NUM 10

void char_func(int offset)
{
  char *ptr  = NULL;
  char *ptr2 = NULL;

  long depart  = 0;
  long arrivee = 0;

  ptrdiff_t nel = 0;

  int idx;
  
  ptr = malloc(NUM*sizeof(char));
  for(idx = 0 ; idx < NUM ; idx++){
    *ptr = 'a' + idx;
  }

  fprintf(stdout,"Ptr location : %p\n",ptr);

  ptr2 = ptr + offset; 
  
  fprintf(stdout,"Ptr2 location : %p\n",ptr2);
  
  depart  = (long)ptr;
  arrivee = (long)ptr2;

  fprintf(stdout,"Location difference: %li\n",arrivee - depart);

  nel = ptr2 - ptr;

  fprintf(stdout,"Pointer difference: %li\n",nel);
}

void int_func(int offset)
{
  int *ptr  = NULL;
  int *ptr2 = NULL;

  long depart  = 0;
  long arrivee = 0;

  ptrdiff_t nel = 0;

  int idx;
  
  ptr = malloc(NUM*sizeof(int));
  for(idx = 0 ; idx < NUM ; idx++){
    *ptr = 'a' + idx;
  }

  fprintf(stdout,"Ptr location : %p\n",ptr);

  ptr2 = ptr + offset; 
  
  fprintf(stdout,"Ptr2 location : %p\n",ptr2);
  
  depart  = (long)ptr;
  arrivee = (long)ptr2;

  fprintf(stdout,"Location difference: %li\n",arrivee - depart);

  nel = ptr2 - ptr;

  fprintf(stdout,"Pointer difference: %li\n",nel);
}

void long_func(int offset)
{
  long *ptr  = NULL;
  long *ptr2 = NULL;

  long depart  = 0;
  long arrivee = 0;

  ptrdiff_t nel = 0;

  int idx;
  
  ptr = malloc(NUM*sizeof(long));
  for(idx = 0 ; idx < NUM ; idx++){
    *ptr = 'a' + idx;
  }

  fprintf(stdout,"Ptr location : %p\n",ptr);

  ptr2 = ptr + offset; 
  
  fprintf(stdout,"Ptr2 location : %p\n",ptr2);
  
  depart  = (long)ptr;
  arrivee = (long)ptr2;

  fprintf(stdout,"Location difference: %li\n",arrivee - depart);

  nel = ptr2 - ptr;

  fprintf(stdout,"Pointer difference: %li\n",nel);
}


int main(int argc, char **argv)
{
  int offset = 4;
  
  char_func(offset);
  int_func(offset);
  long_func(offset);  
  
  return EXIT_SUCCESS;
}

