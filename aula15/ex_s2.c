#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n = 5;
  int *vet = (int *) calloc(n, sizeof(int));
  
  if (vet == NULL) {
    printf("Falha ao alocar memoria!\n");
  }
  
  // Todos os elementos sao 0
  for (int i = 0; i < n; i++) {
    printf("vet[%d] = %d\n", i, vet[i]);
  }
  
  // Libera a memoria
  free(vet);
  return 0;
}
