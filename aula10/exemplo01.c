// Programa para ler valor final como um único inteiro de 16bits sem realizar
// operações manuais de deslocamento de bits

#include <stdio.h>

union LeituraSensor {
  int byte_baixo;
  int byte_alto;
};


int main() {
  union LeituraSensor valor_inteiro;
  
  printf("[LENDO VALOR INTEIRO ATRAVÉS DE BYTES INDIVIDUAIS]\n");
  
  printf("Insira o valor de byte_baixo: ");
  scanf("%d", &valor_inteiro.byte_baixo);
  printf("Insira o valor de byte_alto: ");
  scanf("%d", &valor_inteiro.byte_alto);
  
  printf("%d e %d\n", valor_inteiro.byte_baixo, valor_inteiro.byte_alto);
  
  return 0;
}
