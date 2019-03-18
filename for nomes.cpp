#include <stdio.h>
int i;
char nome[10];
main()
{
        printf ("Digite o seu nome: ");
    	scanf ("%s",&nome);
				for (i=1;i<=100;i++)
		{
        printf ("%d Seu nome eh: %s\n\n",i,nome);
   		}
}
