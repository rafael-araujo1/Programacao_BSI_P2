// Programa para imprimir uma matriz identidade na tela utilizando WHILE

#include <stdio.h>

int main() {
  int linha = 0;
  printf("[MATRIZ IDENTIDADE]\n");
    
  while (linha < 4) {
    int coluna = 0;
    
    while (coluna < 4) {
    
      if (linha == coluna) {
        printf(" 1 ");
      } else {
        printf(" 0 ");
      }
      
      coluna++;
    }
    
    printf("\n");
    linha++;
  }
  

  return 0;
}
