 #include <stdio.h>
 #include <conio.h>
 int  V[5]={2,0,4,3,1};
 int  I, J, A;
 int main()
 {   for (I=0; I<=3; I++)
      for (J=0; J<=3-I; J++)
      {
         if ( V[J] > V[J+1] ) 
         {
              A        = V[J];
              V[J]    = V[J+1];
              V[J+1] = A;
         }
        if (I == 1 && J == 0)
        {
          printf("\neh isso aqui:");
                  printf("\n%d-%d-%d-%d-%d",
                   V[0],V[1],V[2],V[3],V[4]);
                    printf("\neh isso acima:\n");
        }
        
        printf("\n%d-%d-%d-%d-%d",
                   V[0],V[1],V[2],V[3],V[4]);
      } getch();    
 }
