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

  

  for (i = 3; i > -1; i--) {
    if (3 % i)
    {
      printf("\n%i", numeros[i]);
    }
    
  }


  for (i = 3; i > -1; i--) {
        if (!(3 % i)){
      printf("\n%i", numeros[i]);
    }
    
  }


}