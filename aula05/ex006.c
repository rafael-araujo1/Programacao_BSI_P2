#include <stdio.h>

int main() {
  int valor1, valor2;
  int opc;
  
  printf("Escolha uma opcao:\n");
  printf("[1] SOMA\n");
  printf("[2] SUBTRACAO\n");
  printf("[3] MULTIPLICACAO\n");
  printf("[4] DIVISAO INTEIRA\n");
  printf("[5] VERIFICACAO DE RESTO\n");
  printf("Escolha uma opcao: \n");
  scanf("%d", &opc);
  
  switch (opc) {
    case 1:
      printf("[SOMA]\n");
      printf("Insira o primeiro valor: ");
      scanf("%d", &valor1);
      printf("Insira o segundo valor: ");
      scanf("%d", &valor2);
      printf("Soma:              %d + %d = %d\n", valor1, valor2, valor1 + valor2);
      break;
    case 2:
      printf("[SUBTRACAO]\n");
      printf("Insira o primeiro valor: ");
      scanf("%d", &valor1);
      printf("Insira o segundo valor: ");
      scanf("%d", &valor2);
      printf("Subtracao:              %d - %d = %d\n", valor1, valor2, valor1 - valor2);
      break;
      
    case 3:
      printf("[MULTIPLICACAO]\n");
      printf("Insira o primeiro valor: ");
      scanf("%d", &valor1);
      printf("Insira o segundo valor: ");
      scanf("%d", &valor2);
      printf("Multiplicacao:              %d * %d = %d\n", valor1, valor2, valor1 * valor2);
      break;
      
    case 4:
      printf("[DIVISAO INTEIRA]\n");
      printf("Insira o primeiro valor: ");
      scanf("%d", &valor1);
      printf("Insira o segundo valor: ");
      scanf("%d", &valor2);
      printf("Divisao inteira:              %d / %d = %d\n", valor1, valor2, valor1 / valor2);
      break;
    
    case 5:
      printf("[VERIFICACAO DE RESTO]\n");
      printf("Insira o primeiro valor: ");
      scanf("%d", &valor1);
      printf("Insira o segundo valor: ");
      scanf("%d", &valor2);
      printf("Resto:              %d %% %d = %d\n", valor1, valor2, valor1 % valor2);
      break;
      
    default:
      printf("Opcao Invalida\n");
  }
  
  return 0;
}
