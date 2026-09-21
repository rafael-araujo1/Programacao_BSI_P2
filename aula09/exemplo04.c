// Programa para validar URL's

#include <stdio.h>
#include <string.h>

int main() {
  char url[300] = "";
  
  printf("[VALIDANDO URL]\n");
  
  printf("Insira uma URL: ");
  scanf("%299s", url);
  
  char *token_protocolo = strtok(url, "https://");
  
  char *token_caminhos = strtok(token_protocolo, "/");
  
  printf("Você estava acessando: %s\n", token_caminhos);
  
  return 0;
}
