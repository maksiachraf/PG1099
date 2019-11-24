#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPH_SIZE 26
#define NUM_SIZE  10

#define IS_MAJ(c) ((((c) >= 'A')&&((c) <= 'Z'))?1:0)
#define IS_MIN(c) ((((c) >= 'a')&&((c) <= 'z'))?1:0)
#define IS_NUM(c) ((((c) >= '0')&&((c) <= '9'))?1:0)

static void xxx(char *str, int shift)
{
  char sup,inf;
  shift %= NUM_SIZE;
  
  inf = '0';
  sup = inf + (NUM_SIZE - 1);
  
  if((*str + shift) < inf)
    shift += NUM_SIZE;
  if((*str + shift) > sup)
    shift -= NUM_SIZE;
  
  *str += shift;      
}

static void yyy(char *str, int shift)
{
  char sup,inf;
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

static void zzz(char *str, int shift)
{
  if (IS_MIN(*str) || IS_MAJ(*str))
    yyy(str, shift);
  else if (IS_NUM(*str))
    xxx(str, shift);
}

char *map_func_mystere(char *arg)
{
  char *ptr = arg;
  while(*arg)
    zzz(arg++,1);
  
  return ptr;
}

char *reduce_func_mystere(char *arg1, char *arg2)
{
  if(*arg2 == '\0')
    return arg1;
  else
    return strcat(arg1,arg2);
}

char *reduce_func_mystere2(char *arg1, char *arg2)
{
  if(*arg2 == '\0')
    return arg1;
  else
    return strcat(strcat(arg1,"&"),arg2);
}
