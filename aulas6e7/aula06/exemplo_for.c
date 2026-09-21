#include <stdio.h>

int main() {
  int i = 0, j = 0;
  
  for (i = 0, j = 10; i < j; i++, j--) {
    printf("Executando: i = %d | j = %d\n", i, j);
  }
  
  printf("\nLaco encerrado! Valores finais: i = %d | j = %d\n", i, j);
  return 0;
}
