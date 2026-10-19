// Exemplo 06 do slide (NAO FINALIZADO)

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double *double_vet;
  double *vetor_aux;
  int n = 3;
  
  printf("[BANCO BANCARIO]\n");
  
  double_vet = (double *) malloc(n * sizeof(double));
  
  if (double_vet == NULL) {
    printf("> Falha ao alocar memória\n");
    
    return 1;
  } else {
    printf("> Alocacao bem-sucedida!\n\n");
  }
  
  for (int i = 0; i < n; i++) {
    printf("Insira uma quantia: ");
    scanf("%lf", &double_vet[i]);
  }
  
  for (int i = 0; i < n; i++) {
    printf("%.2lf\n", double_vet[i]);
  }
  
  free(double_vet);
  double_vet = NULL;
  
  return 0;
}
