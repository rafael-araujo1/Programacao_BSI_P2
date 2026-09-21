#include <stdio.h>

int main() {
  float consumo, tarifa;
  
  printf("Insira a quantidade de kWh consumida: ");
  scanf("%f", &consumo);
  
  if (consumo < 0) {
    printf("Consumo inválido\n");
    
  } else {
    if (consumo >= 0 && consumo <= 100) {
      tarifa = consumo * 0.5;
      
    } else if (consumo > 100 && consumo <= 200) {
      tarifa = consumo * 0.75;
      
    } else {
      if (consumo > 500) {
        tarifa = (consumo * 1.2) * 1.15;
        
      } else {
        tarifa = consumo * 1.2;
      }
    }
    
    printf("Valor total: R$ %f\n", tarifa);
  
  return 0;
  }
}
