#include <stdio.h>

int main() {
  double N, estimativa, nova_estimativa, diferenca = 1.0;
  int iteracoes = 0;
  
  printf("Insira um numero positivo: ");
  scanf("%lf", &N);
  
  if (N <= 0) {
    printf("O número deve ser positivo");
    return 1;
  }
  
  estimativa = N;
  
  while (diferenca > 0.0001) {
    nova_estimativa = (estimativa + N / estimativa) / 2;
    
    diferenca = nova_estimativa - estimativa;
    
    if (diferenca < 0) {
      diferenca = -diferenca;
    }
    
    estimativa = nova_estimativa;
    iteracoes++;
  }
  
  printf("\nRaiz aproximada: %.6f\n", estimativa);
  printf("Iteracoes: %d\n", iteracoes);
  
  return 0;
}
