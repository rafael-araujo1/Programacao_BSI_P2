// Programa para exibir a tabuada de 1 a 5 utilizando alinhamento de repetições com FOR

#include <stdio.h>

int main() {
  printf("[TABUADA DO 1 AO 5]\n");
  
  for (int numero = 1; numero <= 5; numero++) {
    printf("\n>>>Tabuada de %d\n", numero);
    for (int multiplicador = 1; multiplicador <= 10; multiplicador++) {
      printf("%d x %d = %d\n", numero, multiplicador, numero * multiplicador);
    }
  }

  return 0;
}
