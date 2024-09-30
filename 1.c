#include <stdio.h>

int main() {

  int n;
  printf("Digite um número: ");
  scanf("%d", &n);

  int n_1 = 0, n_2 = 1, aux;

  while (n_2 <= n) {
    if (n_2 == n) {
      printf("%d pertence a sequência!\n", n);
      break;
    }

    aux = n_2;
    n_2 = n_1 + n_2;
    n_1 = aux;
  
  }

  return 0;
}