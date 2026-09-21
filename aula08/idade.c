// Programa para solicitar ler a idade do usuário (utilizando goto)

# include <stdio.h>

int main() {
  int idade = 0;
  printf("[LENDO SUA IDADE]\n\n");
  
  printf("Insira a sua idade: ");
  scanf("%d", &idade);
  
  if (idade < 0) {
    goto erro_idade;
  }
  
  printf("Sua idade: %d\n", idade);
  
  return 0;
  
erro_idade:
    printf("ERRO! Idade inválida!\n");
    return -1;
}
