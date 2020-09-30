#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h> 

int totalizaSegundos(hora, minuto, segundo){ 

int segundosTotais = (hora / 120) + (minuto / 60) + segundo;
printf("Os segundos são é: %i", segundosTotais);
  return 0;
}

int main(void) {
  int hora, minuto, segundo;

    printf("Digite aqui o número: \n");
    scanf("%i", &hora);

    printf("Digite aqui o número: \n");
    scanf("%i", &minuto);

    printf("Digite aqui o número: \n");
    scanf("%i", &segundo);

    totalizaSegundos(hora, minuto, segundo);

}