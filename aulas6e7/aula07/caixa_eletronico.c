// Programa para simular o funcionamento de um caixa eletronico
// NÃO ESTÁ FUNCIONANDO

#include <stdio.h>

int main() {
  float saque = 0.00;
  
  printf("[CAIXA ELETRÔNICO]");
  
  while (saque != 999) {
    printf("Insira o valor a ser retirado: ");
    scanf("%f", &saque);
    
    if (saque % 10 != 0) {
      printf("Valor inválido! Insira um valor múltiplo de 10.\n");
      continue;
    }
    
    if (saque <= 0) {
      printf("Valor inválido! Insira um valor acima de R$ 0.00.\n");
      continue;
    }
  }
  
  printf("Fim\n");
  return 0;
}
