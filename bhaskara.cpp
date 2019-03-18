#include <math.h>
#include <stdio.h>
#include <locale.h>
main() {
 float a, b, c, x1, x2, delta;
 setlocale(LC_ALL,"portuguese");  
 printf("Digite o valor de A: ");
 scanf("%f", &a);
 printf("Digite o valor de B: ");
 scanf("%f", &b);
 printf("Digite o valor de C: ");
 scanf("%f", &c);
 delta = pow(b,2)- 4*a*c;
 printf ("O valor de delta é %f\n",delta); 
	 if(delta < 0) 
	 {
	 printf("A equação não possui raizes reais");
	 } 
	 else 	 
		{
		 x1 = (-b + sqrt(delta)) / (2*a);
		 x2 = (-b - sqrt(delta)) / (2*a);
		 printf("O valor de x1: %.2f \nO valor de x2: %.2f ",x1,x2);
		 }
 }
