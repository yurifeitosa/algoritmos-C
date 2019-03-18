#include<stdio.h>
int main(void)
{
  float soma,nota1=0,nota2=0,media=0;
  int resp;
 
  do
  {
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
 
    media = (nota1 + nota2)/2;
    printf("Media = %f\n",media);
    soma = soma + media; 
    printf("Digite 1 para continuar ou 2 para sair\n");
    scanf("%d", &resp);
 
  }while (resp==1);
 	printf ("A somatoria das medias e %f",soma);
  return 0;
}
