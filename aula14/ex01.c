#include <stdio.h>


int fatorial (int n) {
  if (n <= 1) {
    return 1;
  }
  
  return n * fatorial(n - 1);
}

int main(void) {
  int numero = 5;
  
  printf("%d!: %d", numero, fatorial(numero));
  return 0;
}
