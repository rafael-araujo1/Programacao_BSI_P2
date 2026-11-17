// Exemplo 02 do slide (biblioteca math.h)


#include <stdio.h>
#include <math.h>


int main(void) {
  double x1, y1, x2, y2, delta_x, delta_y, soma_delta, distancia_euclidiana;
  
  printf("Insira o valor de x1: ");
  scanf("%lf", &x1);
  printf("Insira o valor de y1: ");
  scanf("%lf", &y1);
  printf("Insira o valor de x2: ");
  scanf("%lf", &x2);
  printf("Insira o valor de y2: ");
  scanf("%lf", &y2);
  
  delta_x = x2 - x1;
  delta_y = y2 - y1;
  
  soma_delta = pow(delta_x, 2) + pow(delta_y, 2);
  
  distancia_euclidiana = sqrt(soma_delta);
  
  printf("Distancia Euclidiana: %.2lfm\n", distancia_euclidiana);
  
  return 0;
}
