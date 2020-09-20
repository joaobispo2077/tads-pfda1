#include <stdio.h>

int main() {
  int numeros[10];
  int i;

  for (i = 0; i < 10; i++){
    printf("Digite um número: ");
    scanf("%i", &numeros[i]);
  }

  for (i = 0; i < 10; i++){
    printf("\nVocê digitou: %i", numeros[i]);
  }
}
