#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int mediaVetor (int number) {
    int numbers[number];
  
    for(int i = 0; i == number; i++){
      printf("Digite aqui o número logo: \n");
      scanf("%d", &numbers[i]);
  }
  
    int plus = 0;
    for(int j=0; j=number; j++){
     plus = plus + numbers[j];
    }
  
 int  media = plus / number;
  
      printf("Media: %i ", media);
      return 0;
}

int main(void) {
  int number;

  printf("Digite aqui o número: \n");
  scanf("%d", &number);

    mediaVetor(number);
  

}