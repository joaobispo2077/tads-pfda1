#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int main(void) {
  int number;

  printf("Digite uma das opções em [ ]: \n");
  printf("Para ver o cardapio dia digite: [1] \n");
  printf("Para conferir as opções de pagamento digite: [2] \n");
  printf("Para conferir a oferta do dia digite: [3] \n");
  printf("Digite uma das opções: ");
  scanf("%i", &number);

  switch(number){
    case 1: 
      printf("As opções de lanche são: [DESENVOLVIMENTO]");
      break;
    case 2: 
      printf("As opções de pagamento são: [DESENVOLVIMENTO]");
      break;
    case 3: 
      printf("As ofertas de lanche são: [DESENVOLVIMENTO]");
      break;
    default:
      printf("Você fechou o sistema");
      break;
  }
  
}