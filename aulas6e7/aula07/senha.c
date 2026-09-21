// Programa para simular o desbloqueio de um cofre utilizando break
// NÃO ESTÁ FUNCIONANDO

#include <stdio.h>

int main() {
  printf("[SENHA MISTERIOSA]\n");
  char *senha_original = "", *senha_teste = "";
  int tentativa = 0;
  
  printf("Escolha uma senha: ");
  scanf("%s", senha_original);
  
  while (tentativa < 3) {
    printf("Digite a sua senha: ");
    scanf("%s", senha_teste);
    
    if (senha_teste == senha_original) {
      printf("Acesso autorizado!\n");
      break;
    } else if (senha_teste == "9999") {
      printf("Operação abortada!\n");
      break;
    } else {
      printf("Senha inválida! Tente novamente.\n");
    }
    
    tentativa++;
  }
  
  printf("Acabou!");
  return 0;
}
