// Programa para inverter um vetor

#include <stdio.h>

int main() {
  int vetor_int[8], i = 0, num = 0, num_aux = 0;
  
  printf("[INVERTENDO UM VETOR]\n\n");
  
  // Leitura Inicial
  for (i = 0; i < 8; i ++) {
    printf("Insira um número: ");
    scanf("%d", &num);
    vetor_int[i] = num;
  }
  
  // Inversao
  for (i = 0; i < 4; i++) {
    num_aux = vetor_int[i];
    vetor_int[i] = vetor_int[7 - i];
    vetor_int[7 - i] = num_aux;
  }
  
  // Impressao Final
  printf("Vetor invertido: ");
  for (i = 0; i < 8; i++) {
    printf("%d ", vetor_int[i]);
  }
  
  return 0;
}
