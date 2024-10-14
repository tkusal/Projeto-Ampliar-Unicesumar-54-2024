/*
    Escreva um código que exiba na tela um menu com as opções:

    1. Somar 2 numeros
    2. Multiplicar 2 numeros
    3. Encerrar

    O programa só poderá ser finalizado quando o usuário escolher a opção 3
*/

#include <stdio.h>

int main() {
    int opcao, num1, num2, result; 

        do
        {
        printf("1 - Somar 2 numeros\n");
        printf("2 - Multiplicar 2 numeros\n");
        printf("3 - Encerrar\n");
    
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

    if (opcao < 3)
    {
        switch (opcao)
        {
            case 1:
            printf("Digite um numero para somar: ");
            scanf("%d", &num1);

            printf("Digite outro numero: ");
            scanf("%d", &num2);

            result = num1 + num2;
            printf("A soma dos valores de %d + %d = %d\n", num1, num2, result);
            break;

            case 2:
            printf("Digite um numero para multiplicar: ");
            scanf("%d", &num1);

            printf("Digite outro numero: ");
            scanf("%d", &num2);

            result = num1 * num2;
            printf("A multiplicacao dos valores de %d * %d = %d\n", num1, num2, result);
            break;
        } 
    } 
        } while (opcao < 3);

    if (opcao == 3)
    {
        return 0;
    }
} 
