//Script para calcular N primeiros termos da Sequência de Fibonacci utilizando FOR

#include <stdio.h>

int main() {
  int N = 0, fibo = 0, fibo_aux = 1, prox_num = 0;
  
  printf("[SEQUENCIA DE FIBONACCI]\n");
  
  printf("Insira um número: ");
  scanf("%d", &N);
  
  printf("%d primeiros termos da sequência de Fibonacci: ", N);
  for (int i = 0; i < N; i++) {
    printf("%d,... ", fibo);
    
    prox_num = fibo + fibo_aux;
    fibo = fibo_aux;
    fibo_aux = prox_num;
  }
  
  printf("\n");
  
  return 0;
}
