#include <stdio.h>
#include <locale.h>
main (){
	setlocale (LC_ALL,"portuguese");
	float rf;
	printf ("Digite a renda familiar: ");
	scanf ("%f",&rf);
		if (rf>18740){
			printf ("Classe A");
		}
			else if (rf>9370){
				printf ("Classe B");
			}
					else if (rf>3748){
					printf ("Classe C");
				}
						else if (rf>1874){
						printf ("Classe D");
					}
							else{
								printf ("Classe E");
							}
	}

