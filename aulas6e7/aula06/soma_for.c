#include <stdio.h>

int main() {
  int i = 0, N = 0, soma = 0;
  
  printf("Insira um número Inteiro: ");
  scanf("%d", &N);
  
  printf("\nSoma dos pares entre 1 e %d: ", N);
  
  for (i = 1; i < N; i++) {
    if (i % 2 == 0) {
      printf("%d + ", i);
      soma += i;
    }
  }
  
  printf(": %d\n", soma);
  
  return 0;
}
