#include <stdio.h>
#include <locale.h>
int main() {
        char operacao;
        float num1,num2;
        setlocale (LC_ALL,"portuguese");
		printf("Calculadora desenvolvida em LINGUAGEM C !!!!\n");
        printf("Entre com o primeiro numero: ");
        scanf("%f",&num1);
        printf("Escolha sua operação [+ - * / ]: ");
        scanf("%s",&operacao);
        printf("Entre com o segundo numero: ");
        scanf("%f",&num2);
        switch( operacao )
        {
            case '+':
                printf("%.2f + %.2f = %.2f", num1, num2, num1 + num2);
                break;
            case '-':
                printf("%.2f - %.2f = %.2f", num1, num2, num1 - num2);
                break;
            case '*':
                printf("%.2f * %.2f = %.2f", num1, num2, num1 * num2);
                break;
            case '/':
                printf("%.2f / %.2f = %.2f", num1, num2, num1 / num2);
                break;
            default:
                printf("Você digitou uma operação invalida.");
        }
}
