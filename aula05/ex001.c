#include <stdio.h>

int main() {
  int valor1, valor2;
  
  // Leitura dos valores
  printf("Insira o primeiro valor: ");
  scanf("%d", &valor1);
  
  printf("Insira o segundo valor: ");
  scanf("%d", &valor2);
  
  // Resultados
  printf("\n======= RESULTADOS =========\n");
  printf("Soma:              %d + %d = %d\n", valor1, valor2, valor1 + valor2);
  printf("Subtracao:         %d - %d = %d\n", valor1, valor2, valor1 - valor2);
  printf("Multiplicacao:     %d * %d = %d\n", valor1, valor2, valor1 * valor2);
  
  // Evita divisao por zero
  if (valor2 !=0) {
    printf("Divisao Inteira:   %d / %d = %d\n", valor1, valor2, valor1 / valor2);
    printf("Resto:             %d %% %d = %d\n", valor1, valor2, valor1 % valor2);
  } else {
    printf("Divisao:            impossivel (divisao por zero)\n");
    printf("Resto:              impossivel (divisao por zero)\n");
  }
  
  return 0;
}
