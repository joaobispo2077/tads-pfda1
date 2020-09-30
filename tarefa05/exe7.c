#include <stdio.h>

int calculoArea(altura, largura, area) {
  area = altura * largura;
  printf("A area calculada da parede é: %i \n", area);
  return 0;
}

int main(void) {
  int altura, largura, area;

  printf("Digite aqui a altura: \n");
  scanf("%i", &altura);

  printf("Digite aqui a largura: \n");
  scanf("%i", &largura);

  calculoArea(altura, largura, area);
}