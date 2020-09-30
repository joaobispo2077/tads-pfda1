#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int somaCalc(number) {
  int acumulator;

  acumulator = 1;

  for(int i=number; i>0; i--){
    acumulator = acumulator + i;
  }

  printf("A soma é igual a %i", number);
  return 0;
}

int main(void) {
  int number;

  printf("Digite aqui o número: \n");
  scanf("%i", &number);


  somaCalc(number);
}