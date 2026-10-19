// Exemplo 1

#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("[ARMAZENANDO TEMPERATURAS]\n");

  float *temperaturas_vet;
  int n;
  
  temperaturas_vet = (float *) malloc(n * sizeof(float));
  
  if (temperaturas_vet == NULL) {
    printf("Falha ao alocar memoria!\n");
    
    return 1;
  }
  
  printf("Insira a quantidade de temperaturas a serem armazenadas: ");
  scanf("%d", &n);
  
  // Usa a memoria alocada
  for (int i = 0; i < n; i++) {
    printf("Insira o %dº valor: ", i + 1);
    scanf("%f", &temperaturas_vet[i]);
  }
  
  // Exibindo as temperaturas armazenadas
  printf("\n\n[TEMPERATURAS ARMAZENADAS]\n");
  for (int i = 0; i < n; i++) {
    printf("%d: %.1fº C\n", i + 1, temperaturas_vet[i]);
  }
  
  // Libera a memoria quando nao precisa mais
  free(temperaturas_vet);
  temperaturas_vet = NULL;
  
  
  n = 5;
  int *tempeaturas_vet = (int *) calloc(n, sizeof(int));
  
  if (temperaturas_vet == NULL) {
    printf("Falha ao alocar memoria!\n");
  }
  
  // Todos os elementos sao 0
  for (int i = 0; i < n; i++) {
    printf("temperaturas_vet[%d] = %f\n", i, temperaturas_vet[i]);
  }
  
  // Libera a memoria
  free(temperaturas_vet);
  
  return 0;
}
