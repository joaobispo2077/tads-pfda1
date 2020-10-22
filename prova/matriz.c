#include <stdio.h> 

void main()  { 
    int matrizProva[3][3] = {
      {2, 7, 5},
      {8, 2, 10},
      {5, 4, 3}
  };
  for (int j = 0; j  < 3; j++) {




    for (int i = 0; i < 3; i++){

      printf("\n %d \n", matrizProva[j][i] * 5);
   }
    

  }
  
}