#include <stdio.h>


int fatorial (int n) {
  if (n <= 1) {
    return 1;
  }
  
  return n * fatorial(n - 1);
}

int main(void) {
  int numero = 0;
  
  printf("[FATORIAL]\n");
  
  printf("Insira um número: ");
  scanf("%d", &numero);
  
  printf("\n%d!: %d\n", numero, fatorial(numero));
  
  return 0;
}
