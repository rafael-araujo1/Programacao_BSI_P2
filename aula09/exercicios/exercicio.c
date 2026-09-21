#include <stdio.h>

int operacoes(numero, numero2){
 // soma
 int soma = 0;
 soma = (numero + numero2) 
 printf("A soma de %d + %d é: %d", numero, numero2, soma);


}

int main(){
  int numero, numero2;
  printf("Digite o primeiro valor \n");
  scanf("%d", &numero);
  printf("Digite o segundo valor \n");
  scanf("%d", &numero2);

  operacoes(numero, numero2)
}
