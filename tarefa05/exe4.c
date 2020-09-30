#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int verificaNumero(numero){ 
   if(numero > 0) {
    printf("O número digitado é positivo.");
  } else {
    printf("O número digitado é negativo.");
  }
  return 0;
}

int main(void) {
  int numero;

    printf("Digite aqui o número: \n");
    scanf("%d", &numero);

    verificaNumero(numero);

}