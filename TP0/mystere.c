#include <stdio.h>
#include <stdlib.h>

int map_func_mystere(int arg)
{
  return 2*arg ;
}

int reduce_func_mystere(int arg1, int arg2)
{
  return (arg1 > arg2) ? arg1 : arg2  ;
}
