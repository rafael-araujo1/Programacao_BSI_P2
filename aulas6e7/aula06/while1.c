#include <stdio.h>

int main() {
  int a, b;
  
  printf("Insira dois valores inteiro: ");
  scanf("%d %d", &a, &b);
  
  while (a < b) {
    a++;
    printf("%d\n", a);
  }
    
  printf("Fim do programa\n");
  return 0;
}
