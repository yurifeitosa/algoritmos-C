#include <stdio.h>
main() {
      int idade; 
	  printf("Qual a sua idade? ");
      scanf("%d", &idade);
      if(idade >= 18 && idade <=70)
            printf("Voce deve votar!");
      else if(idade <= 15)
            printf("Nao pode votar");
      else
            printf("Voto facultativo");
 }
//A partir da idade informada de um cidad�o, diga se ele n�o pode votar (idade inferior a 16), 
//ou se o voto � facultativo (idade igual a 16 ou 17 ou ainda maior do que 70), 
//ou ainda se o voto � obrigat�rio para idades entre 18 e 70 (incluindo estes valores)
