#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "Portuguese");
    int q,idade,soma=0,maisVelha=0,maisNova=150;
    float media;
    printf ("Digite quantas idades serão calculadas: ");
    scanf ("%d",&q);
    for (int contador=1;contador<=q;contador++)	{
        printf ("Digite a idade %d: ",contador);
        scanf ("%d",&idade);
	        if (idade == 1)
		        {
				  maisNova=idade; 
				}
		        if (idade>maisVelha){
		        	maisVelha=idade;
		        	}
			        if (idade <maisNova){
			        maisNova=idade;
			        }
		soma+=idade;
    	}
    media=soma/q;
    printf ("Mais nova: %d \nMais velha: %d \nMedia: %.2f",
            maisNova,maisVelha,media);
}
