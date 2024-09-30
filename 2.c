#include <stdio.h>
#include <string.h>

int main() {

  char string[100];

  fgets(string, 100, stdin);
  string[strcspn(string, "\n")] = '\0';

  int i = 0, contador = 0;

  while (string[i] != '\0') {

    if (string[i] == 'a' || string[i] == 'A') {
      contador++;
    }
    i++;
  }

  printf("A string %s tem %d a(s)\n", string, contador);

  return 0;
}