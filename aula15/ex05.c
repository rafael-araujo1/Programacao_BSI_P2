// Exemplo 05 do slide

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  printf("[ARMAZENANDO INTEIROS]\n");

  int *inteiros_vet;
  int *vetor_aux;
  int n = 3;
  
  inteiros_vet = (int *) malloc(n * sizeof(int));
  
  if (inteiros_vet == NULL) {
    printf("> Falha ao alocar memoria!\n");
    
    return 1;
  } else {
    printf("> Alocacao bem-sucedida\n\n");
  }
  
  for (int i = 0; i < n; i++) {
    printf("Insira o %dº inteiro: ", i + 1);
    scanf("%d", &inteiros_vet[i]);
  }
  
  // Exibindo os inteiros armazenados
  printf("\n\n[INTEIROS ARMAZENADOS]\n");
  for (int i = 0; i < n; i++) {
    printf("%d: %d\n", i + 1, inteiros_vet[i]);
  }
  
  // REALOCANDO PARA 5
  n += 2;
  
  vetor_aux = (int *) realloc(inteiros_vet,n * sizeof(int));
  
  if (inteiros_vet == NULL) {
    printf("> Falha ao realocar memoria!\n");
    
    return 1;
  } else {
    printf("> Realocacao bem-sucedida\n\n");
  }
  
  inteiros_vet = vetor_aux;
  
  for (int i = 3; i < n; i++) {
    printf("Insira o %dº inteiro: ", i + 1);
    scanf("%d", &inteiros_vet[i]);
  }
  
  // Reexibindo os inteiros armazenados
  printf("\n\n[INTEIROS ARMAZENADOS]\n");
  for (int i = 0; i < n; i++) {
    printf("%d: %d\n", i + 1, inteiros_vet[i]);
  }
  
  free(inteiros_vet);
  inteiros_vet = NULL;
  
  return 0;
}
