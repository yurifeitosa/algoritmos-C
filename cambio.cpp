#include <stdio.h>
main (){
	float real,us,arg,euro,bit,cot_us,cot_arg,cot_euro,cot_bit;
	us=3.7304;
	arg=0.0961;
	euro=4.2382;
	bit=us*3775;
		
	printf ("Digite o valor em REAIS: ");
	scanf ("%f",&real);
	
	cot_us=real/us;
	cot_arg=real/arg;
	cot_euro=real/euro;
	cot_bit=real/bit;
	
	printf ("\nValor em DOLAR: %f",cot_us);
	printf ("\nValor em PESOS ARG: %f",cot_arg);
	printf ("\nValor em EURO: %f",cot_euro);
	printf ("\nValor em BITCOIN: %f",cot_bit);
}
