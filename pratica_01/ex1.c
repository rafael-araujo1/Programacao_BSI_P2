# include <stdio.h>

int main() {
  float lado1, lado2, lado3;
  
  printf("Insira a medida do lado 1: ");
  scanf("%f", &lado1);
  printf("Insira a medida do lado 2: ");
  scanf("%f", &lado2);
  printf("Insira a medida do lado 3: ");
  scanf("%f", &lado3);
  
  if (lado1 > 0) {
    if (lado2 > 0) {
      if (lado3 > 0) {
        if ((lado1 + lado2) > lado3 || (lado1 + lado3 > lado2) || (lado2 + lado3) > lado1) {
          printf("da certo\n");
  
        } else {
    printf("Valores não formam um triângulo.\n");
        }
      }
    }
  }
  
  //printf("As medidas são: %f, %f, %f", lado1, lado2, lado3);
  
  return 0;
}
