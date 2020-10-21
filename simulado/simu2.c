/* -------------------Bibliotecas------------------- */
#include   <stdio.h> 
#include   <conio.h> 
#include   <stdlib.h> 
#include   <string.h> 
#include   <locale.h> 
#include   <time.h> /* Para poder usar as funções : _strdate(data); e _strtime(hora); */
/* -------------------Constantes-------------------- */
#define    OK   1
/* -------------------Variáveis globais-------------- */
char opc;
FILE * arq;
char data[11];
char hora[9];
/* -------------------FUNÇÕES------------------------ */
int  verifica_senha (){	
  char 	tst[20] = {66,65,84,69,32,70,79,82,84,69,32,79,32,84,65,77,66,79,82};
	char	senha[20];
	int    i;
	
	system ("color a ") ;
	system ("cls");    
	printf ("\n\n=========================");
	printf ("\nSenha para acesso: ");
	for ( i=0; ; i++ )
	{	fflush (stdin); 
		senha[i] = getch(); printf ("%c", 3);
		if (senha[i] == 13)
		{
		   senha[i] = '\0'; /* finaliza senha com NULL TERMINATOR */
		   break; /* 13 = ENTER ---> break sai do for */
	    }   
	}
	printf ("\n=========================");
	
	if ( strcmp (tst, senha) != 0 ) 
	{  printf ("\n=========================\nACESSO NEGADO\n=========================");
	   getch();
	   return (0);
	}
	else
	   return (OK);
}

void menu( void)
{
  do /* Controla o looping do menu */
  {
    /*_strdate(data);*/
    _strdate (data);
    _strtime(hora);
    system ("color 20 ") ;
    system ("cls");
    printf ("============================================\n");
    printf ("Operações[%c%c/%c%c/%c%c][%s]\n",data[3],data[4],data[0],data[1],data[6],data[7],hora);
    printf ("============================================\n");
    printf ("          1. Vendas               \n");
    printf ("          2. Pagamentos           \n");
    printf ("          3. Fila de espera       \n");
    printf ("          4. Entrega              \n");
    printf ("          5. Sair                 \n");    
    printf ("==================================\n");
    printf ("Digite sua opção: "); 
    fflush (stdin); opc = getche(); /* Captura a opção desejada */
 
    /* Analisa a opção digitada */    
    switch ( opc )
    {
           case '1' :   system ("vendas");
           break;
           
           case '2' :   system ("PAGAMENTOS");
           break;
           
           case '3' :   system ("FILAS");
           break;
           
           case '4' :   system ("ENTREGA");
           break;

           case '5' : exit(0);
           break;           
           
           default :
           {    /* Avisa sobre o erro */
                system ("color 4 ") ;
                system ("cls");
                printf ("\n\n\n\nErro. Opção inválida!\a\a\a");
                printf ("\nPressione qualquer tecla para voltar ao menu");
                getch();
           }
    }    
  }while ( opc != '5' ); /* Fica em looping enquanto não digita 5=Sair*/
}

/* Corpo do programa */
main()
{
    setlocale (LC_ALL, ""); 
    if ( verifica_senha() == OK )       
	   menu();  
}
