# include <stdio.h>

int main() {
  int temperatura;
  
  printf("Insira a temperatura [Em graus Celsius]: ");
  scanf("%d", &temperatura);
  
  // 'if' inicial
  if (temperatura >= 35) {
    printf("ALERTA: Muito quente! Beba bastante água.\n");
    
    // 1º 'else if'
  } else if (temperatura >= 25) {
    printf("Clima quente. Dia bom para ir para a praia.\n");
    
    // 2º 'else if'
  } else if (temperatura >= 15) {
    printf("Clima agradavel.\n");
    
    // 3º  'else if'
  } else if  (temperatura >= 5) {
    printf("Clima frio. Nao esqueca o casaco.\n");
    
    // 'else' final
  } else {
    printf("ALERTA: Muito frio! Fique aquecido.\n");
  }
  
  return 0;
}
