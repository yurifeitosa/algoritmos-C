#include <stdio.h>
int main(){
float nota,soma=0,media;
int quantidade=0;
do
{
printf ("Digite a nota:");
scanf ("%f",&nota);
if (nota!=0){
soma=soma+nota;
quantidade=quantidade+1;
}
}while (nota!=0);
media=soma/quantidade;
printf ("Foram digitadas %d notas com media %f",
quantidade,media);
}
