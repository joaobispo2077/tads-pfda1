#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int calculaRaio(numero){ 
float volume = 4 / (3*(numero*numero*numero));
printf("O volume é: %f", volume);
  return 0;
}

int main(void) {
  float numero;

    printf("Digite aqui o número: \n");
    scanf("%f", &numero);

    calculaRaio(numero);

}