#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int fatorialCalc(number) {
  int acumulator;

  acumulator = 1;

  for(int i=number; i>0; i--){
    acumulator = acumulator * i;
  }

  printf("O fatorial de %i é igual a %i", number, acumulator);
  return 0;
}

int main(void) {
  int number;

  printf("Digite aqui o número: \n");
  scanf("%i", &number);


  fatorialCalc(number);
}