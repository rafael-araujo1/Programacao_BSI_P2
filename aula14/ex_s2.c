#include <stdio.h>


int fibo(int n) {
  if (n <= 1) {
    return n;
  }
  
  return fibo(n - 1) + fibo(n - 2);
}


int main(void) {
  int termo = 0;
  
  printf("[FIBONACCI]\n");
  
  printf("Insira um termo: ");
  scanf("%d", &termo);
  
  printf("Fibonacci(%d): %d\n", termo, fibo(termo));
  return 0;
}
