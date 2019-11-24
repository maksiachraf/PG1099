#include <stdio.h>
#include <stdlib.h>

int map_func_mystere(int);
int reduce_func_mystere(int, int);

int *Map(int tab[], int size, int (*map_func)(int))
{ for(int i=0, i < size){
  tab[i]=map_func(tab[i]);
}

  return tab;
}

int Reduce(int tab[], int size, int (*reduce_func)(int,int))
{ int red=tab[0];
  for(int i=1, i < size){
    red=reduce_func(red,tab[i]);
}
  return red ;
}


int main(int argc, char *argv[])
{
  int tabb[5]={1,2,3,4};

  Map(tabb,4,map_func_mystere);
  Reduce(tabb,4,reduce_func_mystere);

  exit(EXIT_SUCCESS);
}
