 #include <stdio.h>
 #include <conio.h>
 int  V[5]={2,0,4,3,1};
 int  I, J, A;
 main()
  {   for (I=0; I<=3; I++)
      for (J=0; J<=3-I; J++)
      {
         if ( V[J] < V[J+1] )
         {
              A  = V[J];
              V[J] = V[J+1];
              V[J+1] = A;
         }
        printf("\n%d-%d-%d-%d-%d",
                   V[0],V[1],V[2],V[3],V[4]);
     }
    int maior = V[0];
    int menor = V[0];


    for (int i = 0; i < 5; ++i) {
        if (V[i] > maior) maior = V[i];
        if (V[i] < menor) menor = V[i];
    }

    printf("\n\n Maior: %d\n", maior);
    printf(" Menor: %d", menor);
    getch();
 }
