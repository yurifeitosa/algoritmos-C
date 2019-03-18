#include <stdio.h>
int main(){
//cedulas 100,50,20,10,5,2,
//moedas 1,0.50,0.25,0.10,0.05,0.01
float troco,soma=0;
int x=0;

printf ("Digite o troco em reais: ");
scanf ("%f",&troco);

while (troco<=0){
	printf ("Digite o troco NOVAMENTE!:");
	scanf ("%f",&troco);
	}

printf ("\n---------------------------\n\n");

while (troco>=100){
	troco=troco-100;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 100,00\n",x);
		soma = soma + (x*100);
		x=0;
		}
		
while (troco>=50){
	troco=troco-50;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 50,00\n",x);
		soma = soma + (x*50);
		x=0;
		}
		
while (troco>=20){
	troco=troco-20;
	x++;
	}
		if (x>0){printf ("%i -> R$ 20,00\n",x);
		soma = soma + (x*20);
		x=0;
		}
while (troco>=10){
	troco=troco-10;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 10,00\n",x);
		soma = soma + (x*10);
		x=0;
		}
while (troco>=5){
	troco=troco-5;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 5,00\n",x);
		soma = soma + (x*5);
		x=0;
		}
while (troco>=2){
	troco=troco-2;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 2,00\n",x);
		soma = soma + (x*2);
		x=0;
		}
while (troco>=1){
	troco=troco-1;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 1,00\n",x);
		soma = soma + (x*1);
		x=0;
		}
while (troco>=0.50){
	troco=troco-0.5;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 0,50\n",x);
		soma = soma + (x*0.5);
		x=0;
		}
while (troco>=0.25){
	troco=troco-0.25;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 0,25\n",x);
		soma = soma + (x*0.25);
		x=0;
		}
while (troco>=0.10){
	troco=troco-0.10;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 0,10\n",x);
		soma = soma + (x*0.1);
		x=0;
		}
while (troco>=0.05){
	troco=troco-0.05;
	x++;
	}
		if (x>0){
		printf ("%i -> R$ 0,05\n",x);
		soma = soma + (x*0.05);
		x=0;
		}
while (troco>=0.009){
	troco=troco-0.01;
	x++;
	}
		if (x>1){
		printf ("%i -> R$ 0,01\n",x);
		soma = soma + (x*0.01);
		x=0;
		}
	printf ("\n---------------------------\n");	
	printf ("Soma -> R$ %.2f",soma);
	printf ("\n---------------------------\n");	
}
