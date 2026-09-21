#include <stdio.h>

int main() {

  // 1. AND (&)
  //int a = 5, b = 3;
  //int r = a & b;
  //printf("%d  &  %d:  %d\n", a, b, r);
  
  // 2. OR (|)
  //int a = 5, b = 3;
  //int r = a | b;
  //printf("%d  |  %d:  %d\n", a, b, r);
  
  // 3. XOR (^)
  //int a = 5, b = 3;
  //int r = a ^ b;
  //printf("%d  ^  %d:  %d\n", a, b, r);
  
  // 4. NOT (~)
  //int a = 5;
  //int r = ~a;
  //printf("~%d:  %d\n", a, r);
  
  // 5. Deslocamento (>> | <<)
  int a = 8;
  int esq = a >> 1;
  int dir = a << 1;
  printf("Esquerda: %d\nDireita: %d\n", esq, dir);
  
  return 0;
}
