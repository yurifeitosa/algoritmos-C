#include <stdio.h>
main (){
	float peso, altura, imc;
	printf ("Digite o valor do seu peso: ");
	scanf ("%f",&peso);
	printf ("Digite o valor do seu altura: ");
	scanf ("%f",&altura);
	imc=peso/(altura*altura);
	printf ("O valor do IMC e %f\n",imc);
	if (imc<17){
		printf("Muito abaixo do peso!");
	}
	else if (imc<18.5){
		printf ("Abaixo do peso!");
	}
	else if (imc<25){
		printf ("PEso Normal!");
	}
	else if (imc<30){
		printf ("Acima do peso!");
	}
	else if (imc<35){
		printf ("Obesidade I !!!!");
	}
	else if(imc<40){
		printf("Obesidade II !!!");
	}
	else{
		printf("Obesidade III - Obesidade Mordbida!!!!");
	}
}
