#include <stdio.h>

// Basta somar 2+3+4+5+6+7+8+9+10+11+12 = 77

int main() {

  int indice = 12, soma = 0, k = 1;

  while (k < indice) {
    k++;
    soma += k;
  }

  printf("%d\n", soma);

  return 0;
}