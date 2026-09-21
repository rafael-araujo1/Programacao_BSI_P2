#include <stdio.h>

int main() {
  int n;
  double estimativa = 2, nova_estimativa, diferenca;
  
  printf("Insira um número maior que 0: ");
  scanf("%d", &n);
  
  nova_estimativa = 0.5 * (estimativa + (n / estimativa));
  diferenca = estimativa - nova_estimativa;
  
  while (diferenca > 0.0001) {
    diferenca = ;
  }
  
  printf("Resultado: %lf\n", diferenca);

  return 0;
}
