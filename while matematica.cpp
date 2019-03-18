#include <stdio.h>
#include <stdlib.h>
main()
{
  int num1, num2;
  printf("Digite o primeiro numero inteiro: ", num1);  
  scanf("%d", &num1);     
  printf("Digite o primeiro numero inteiro: ", num2);  
  scanf("%d", &num2);       
  while(num1 < num2) 
  {  
    if ((num1 % 2) == 0) 
    {
      printf("%d\n", num1);       
    }
    num1++;  
  }
  system("pause");
  return(0);     
}

