#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main ()
{
	setlocale (LC_ALL,"portuguese");
	int  i;
	do
        {
        	printf ("\n\nEscolha a opção sobre o curso desejado:\n\n");
        	printf ("\t(1)...Engenharia Civil\n");
        	printf ("\t(2)...Engenharia Elétrica\n");
        	printf ("\t(3)...Engenharia da Computação\n");
        	printf ("\t(4)...Engenharia Mecânica\n");
        	printf ("\t(5)...Engenharia Química\n");
        	printf ("\t(6)...Arquitetura\n\n");
        	scanf("%d", &i); 
        	system ("cls");
        } while ((i<1)||(i>6));

	switch (i)
        {
        	case 1:
                	printf ("\n\n\t\tVoce escolheu Engenharia Civil.\n");
        	break;
        	case 2:
                	printf ("\n\n\t\tVoce escolheu Engenharia Elétrica.\n");
        	break;
        	case 3:
                	printf ("\n\n\t\tVoce escolheu Engenharia da Computação.\n");
        	break;
        	case 4:
                	printf ("\n\n\t\tVoce escolheu Engenharia Mecânica.\n");
        	break;
        	
        	case 5:
                	printf ("\n\n\t\tVoce escolheu Engenharia Química.\n");
        	break;
			case 6:
                	printf ("\n\n\t\tVoce escolheu Arquitetura.\n");
        	break;
        }
	return(0);
	system ("pause");
}
