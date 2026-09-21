// Programa para ler uma matriz 3x3 de inteiros e somar todos os elementos

#include <stdio.h>

int main() {
  int mat_inteiros[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}}, soma = 0,
  i = 0, j = 0;
  
  printf("[SOMANDO OS ELEMENTOS DE UMA MATRIZ 3x3]\n");
  
  for (i = 0; i < 3; i++) {
    for (j = 0; j < 3; j++) {
      printf("Insira um número para a posição[%d][%d]: ", i, j);
      scanf("%d", &mat_inteiros[i][j]);
      soma += mat_inteiros[i][j];
    }
  }
  printf("Soma: %d\n", soma);
  
  return 0;
}
