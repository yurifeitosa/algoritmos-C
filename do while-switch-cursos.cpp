#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
int main ()
{
	setlocale (LC_ALL,"portuguese");
	int  i;
	do
        {
        	printf ("\n\nEscolha a op��o sobre o curso desejado:\n\n");
        	printf ("\t(1)...Engenharia Civil\n");
        	printf ("\t(2)...Engenharia El�trica\n");
        	printf ("\t(3)...Engenharia da Computa��o\n");
        	printf ("\t(4)...Engenharia Mec�nica\n");
        	printf ("\t(5)...Engenharia Qu�mica\n");
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
                	printf ("\n\n\t\tVoce escolheu Engenharia El�trica.\n");
        	break;
        	case 3:
                	printf ("\n\n\t\tVoce escolheu Engenharia da Computa��o.\n");
        	break;
        	case 4:
                	printf ("\n\n\t\tVoce escolheu Engenharia Mec�nica.\n");
        	break;
        	
        	case 5:
                	printf ("\n\n\t\tVoce escolheu Engenharia Qu�mica.\n");
        	break;
			case 6:
                	printf ("\n\n\t\tVoce escolheu Arquitetura.\n");
        	break;
        }
	return(0);
	system ("pause");
}
