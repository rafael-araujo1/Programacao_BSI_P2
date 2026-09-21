// Programa para contar o tamanho da string sem strlen()

#include <stdio.h>

int main() {
  char sms[20] = "";
  int cont = 0;
  
  printf("[VERIFICANDO O TAMANHO DO SMS]\n");
  
  printf("Insira um SMS: ");
  scanf("%19s", sms);
  
  printf("SMS: %s\n", sms);
  return 0;
}
