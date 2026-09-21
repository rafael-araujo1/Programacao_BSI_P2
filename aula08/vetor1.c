// Programa para entender o funcionamento de vetores

#include <stdio.h>

int main() {
  int vetor_int[5] = {5, 2, 12, 15, 8}, i = 0, 
  soma = 0, maior = 0, menor = 0;
  float media = 0;
  
  printf("[ANALISANDO UM VETOR]\n\n");
  
  for (i = 0; i < 5; i++) {
    // Soma
    soma += vetor_int[i];
    
    // Maior Menor
    if (i == 0) {
      maior = vetor_int[i];
      menor = vetor_int[i];
    } else {
      if (vetor_int[i] > maior) {
        maior = vetor_int[i];
      }
      if (vetor_int[i] < menor) {
        menor = vetor_int[i];
      }
    }
    
  }
  
  media = soma / 5.0;
  
  printf("[Relatório Final]\n");
  printf("Soma: %d\n", soma);
  printf("Média: %.2f\n", media);
  printf("Maior: %d\n", maior);
  printf("Menor: %d\n", menor);
  
  return 0;
}
