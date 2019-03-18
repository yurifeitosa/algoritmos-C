#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale (LC_ALL,"");
        float valor_i,
              valor_f;
        int   juros=0;

        int meses;

        printf("Qual o valor inicial da dívida: ");
        scanf("%f", &valor_i);

        printf("Você vai atrasar quantos meses [1-12]?: ");
        scanf("%d", &meses);

        switch(meses)
        {
            case 12:
                juros++;
            case 11:
                juros++;
            case 10:
                juros++;
            case 9:
                juros++;
            case 8:
                juros++;
			case 7:
                juros++;
            case 6:
                juros++;
            case 5:
                juros++;
            case 4:
                juros++;
            case 3:
                juros++;
            case 2:
                juros++;
            case 1:
                juros++;
                break;
            default:
                printf("Você não digitou um valor válido de meses\n");
        }
        printf("Juros: %d%\n",juros);
        valor_f=( (1 + (juros/100.0))*valor_i);
        printf("Valor final da dívida: R$ %.2f\n", valor_f);

}
