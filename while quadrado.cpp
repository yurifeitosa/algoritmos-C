#include <stdio.h>
#include <locale.h>
//#include <math.h>
int main () {
	setlocale (LC_ALL,"portuguese");
  int num,quad;
  
  while (num != 10) 
    {
      printf("\nDigite um número: ");
	  scanf("%d", &num);
	  quad = num * num ;
	  //pow(num,2);
      printf ("O quadrado de %d = %d\n", num, quad); 
	  }
 }
