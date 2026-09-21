#include <stdio.h>

int main() {
  int a, b;
  printf("Insira dois números: ");
  scanf("%d %d", &a, &b);
  
  printf("a == b   : %d\n", a == b);
  printf("a != b   : %d\n", a != b);
  printf("a >  b   : %d\n", a >  b);
  printf("a <  b   : %d\n", a <  b);
  printf("a >= b   : %d\n", a >= b);
  printf("a <= b   : %d\n", a <= b);
  
  return 0;
}
