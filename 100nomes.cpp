#include <stdio.h>
char nome;
int main()
{
        printf ("Digite o seu nome: ");
    	scanf ("%s",&nome);
		for (int contador=0;contador<100;contador++)
		{
        printf ("%d Seu nome eh: %s",contador,nome);
   		}
   	return (0);
}
