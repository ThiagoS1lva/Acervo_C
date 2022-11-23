#include <stdio.h>

int main(void) {
  int m, n, a;
  printf("Digite um número:");
  scanf("%i", &m);
  
  for (n = 1; n <= m; n++)
  {
    a = 7 *n; 
    printf("%i\n ", a); 
  }
  return 0;
}