#include <stdio.h>
#include <conio.h>
int      varA, varB, varC;
float   varF;
char    varS;
int       varL;
void main(){   
  varS = "1000";
  varA = 4;
  varF = 3.5;
  varC = 0;
  varL = 1;

    if ((varC<varA) && varL || (varS > varC))    
    varB = varF/varA;
    else
      varB = varA/varC;

    printf ("\n%d-%d-%d-%0.1f-%s-%d", 

    varA, varB, varC, varF, varS, varL);

    getch();
}
