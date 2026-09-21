// Programa para simular o status de uma entrega com ENUM

#include <stdio.h>

enum StatusPedido {PENDENTE, PROCESSANDO, ENVIADO, ENTREGUE, CANCELADO};

int main() {
  enum StatusPedido status;
  
  status = PENDENTE; 
  switch (status) {
    case PENDENTE:
      pass
    case PROCESSANDO:
      pass
    case ENVIADO:
      pass
    case ENTREGUE:
      pass
    case
  }
  
  for (int i = 0; i < 1; i++) {
    status++;
  }
  
  printf("Status atualizado: %d\n", status);

  return 0;
}
