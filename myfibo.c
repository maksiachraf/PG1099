// fibo.c: Fibonacci Series using Dynamic Programming
#include <stdio.h>
int fibo(int n) {
  int f_n, f_n_1, f_n_2;
  int i;

  if(n < 1) return 0;

  f_n_2=0;
  f_n_1=1;
  for (i = 2; i <= n; i = i + 1) {
      /* Add the previous 2 numbers in the series
         and store it */
      f_n = f_n_1 + f_n_2;
      f_n_2 = f_n_1;
      f_n_1 = f_n;
    }
  return f_n;
}
int main(int argc, char *argv[]) {
  int n=5;
  printf("fibonacci de %i est %i\n",n,fibo(n));
}
