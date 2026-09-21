// Programa para simular um produto em estoque

#include <stdio.h>

typedef struct {
  char nome[50];
  float preco;
  int qntd;
} Produto;

int main() {
  Produto p = {"Lapis", 1.50, 200};
  
  printf("Total investido em %s: R$%.2f\n", p.nome, p.qntd * p.preco);

  return 0;
}
