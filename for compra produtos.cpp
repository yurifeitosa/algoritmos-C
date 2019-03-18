#include <stdio.h>
int main(){
int codigo,quantidade,cmc,cmq,mq=0;
float valor=0,total=0,vmc=0;
for (int i=0;i<5;i++){
printf ("\n");
printf ("\nDigite o codigo do produto %d: ",i+1);
scanf ("%d",&codigo);
printf ("\nDigite a quantiade do produto %d: ",i+1);
scanf ("%d",&quantidade);
printf ("\nDigite o valor do produto %d: ",i+1);
scanf ("%f",&valor);
printf ("\n");
total=total+valor*quantidade;
if (valor>vmc){
cmc=codigo;
vmc=valor; }
if (quantidade>mq){
mq=quantidade;
cmq=codigo; } }
printf ("\n\nValor total: %.2f\n",total);
printf ("Codigo mais caro:%d\n",cmc);
printf ("Codigo maior quantidade:%d\n",cmq);
}
