#include <stdio.h>
#include <stdlib.h>

int main() {
  int *p;
  int n = 5;
  
  p = (int *) malloc(n * sizeof(int));
  
  if (p == NULL) {
    printf("Falha ao alocar memoria!\n");
    
    return 1;
  }
  
  // Usa a memoria alocada
  for (int i = 0; i < n; i++) {
    p[i] = (i + 1) * 10;
    printf("%d\n", p[i]);
  }
  
  // Libera a memoria quando nao precisa mais
  free(p);
  
  return 0;
}
