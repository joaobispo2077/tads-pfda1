#include <stdio.h>

int main() {
  int numeros[4];
  int i;

  

  for (i = 0; i < 4; i++) {
    printf("Digite : ");
    scanf("%i", &numeros[i]);
  }

  for (i = 3; i > -1; i--) {
    printf("\n%i", numeros[i]);
  }

  
  for (i = 0; i < 4; i++) { //numero par
    if (i % 2)
    {
      printf("\n%i", numeros[i]);
    }
    
  }


  for (i = 0; i < 4; i++) { // numero impar
    if (!(i % 2))
    {
      printf("\n%i", numeros[i]);
    }

  // menor numero do vetor
  int menorDado = numeros[0];
  int indiceDado = 0;
  for (i = 0; i < 4; i++) { 
    if (numeros[i] < menorDado){
      menorDado = numeros[i];
      indiceDado = i;
    }    
  }
  printf("O menor dado no vetor eh %i e sua posicao eh %i", menorDado, indiceDado+1);
    }

  // maior numero do vetor
  int maiorDado = numeros[0];
  int indiceDado = 0;
  for (i = 0; i < 4; i++) { 
    if (numeros[i] > maiorDado){
      maiorDado = numeros[i];
      indiceDado = i;
    }    
  }
  printf("O menor dado no vetor eh %i e sua posicao eh %i", maiorDado, indiceDado+1);

  int soma, mediaVetor;
    for (i = 0; i < 4; i++) { 
      soma = soma + numeros[i];
     
  }
  mediaVetor = soma / i;
  printf("A media dos valores no vetor eh %i", mediaVetor);

    int vetorRepetido[4] = { numeros[0], numeros[1], numeros[2], numeros[3] };
    
    for(i = 0; i < 4; i++) {
        
        for(int j = 0; j < 4; j++) {
            if(numeros[i] == vetorRepetido[j]) {
                printf("\n%i", numeros[i]);
            }
        }
        
    }
    int vetorRepetido[4] = { numeros[0], numeros[1], numeros[2], numeros[3] };
    
    for(i = 0; i < 4; i++) {
        
        for(int j = 0; j < 4; j++) {
            if(!(numeros[i] == vetorRepetido[j])) {
                printf("\n%i", numeros[i]);
            }
        }
        
    }



}