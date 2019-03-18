#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c,d,media;
   printf ("DIGITE O VALOR DA PRIMEIRA NOTA:");
   scanf ("%d",& a);
   printf ("DIGITE O VALOR DA SEGUNDA NOTA:");
   scanf ("%d",& b);
   printf ("DIGITE O VALOR DA TERCEIRA NOTA;");
   scanf ("%d",& c);
   printf ("DIGITE O VALOR DA QUARTA NOTA:");
   scanf ("%d",& d);
   media =(a+b+c+d)/4;
   if (media >=7)
         {                                                              
            printf ("VOCE FOI APROVADO SUA MEDIA FINAL E %d", media);
            getch();                            
         }
   else
          {
               printf ("VOCE FOI REPROVADO SUA MEDIA FINAL E %d", media);
                getch();
           }
                                 
}
