// Programa para calcular o fatorial de um número N

#include <stdio.h>

int main() {
  int N = 0, fatorial = 0;
  
  printf("[FATORIAL DE UM NÚMERO]\n");
  
  printf("Insira um número: ");
  scanf("%d", &N);
  
  fatorial = N;
  printf("%d!: %d x ", N, N);
  for (int i = N - 1; i >= 1; i--) {
    if (i != 1) {
      printf("%d x ", i);
    } else {
      printf("%d = ", i);
    }
    fatorial *= i;
  }
  
  printf("%d\n", fatorial);
}
