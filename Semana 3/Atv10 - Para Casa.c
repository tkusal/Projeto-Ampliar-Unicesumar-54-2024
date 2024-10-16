/*
    Escreva um código que exiba na tela um menu com as opções:

    1. Somar 2 numeros
    2. Multiplicar 2 numeros
    3. Encerrar

    O programa só poderá ser finalizado quando o usuário escolher a opção 3
*/

#include <stdio.h>

int main () {
    int opcao, n1, n2;
    //int result;

    while (1) {
        printf("Escolha uma opção:\n1. Somar\n2. Multiplicar\n3. Encerrar\n");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Informe o primeiro numero: ");
                scanf("%d", &n1);

                printf("Informe o segundo numero: ");
                scanf("%d", &n2);

                /*
                result = n1+n2;
                printf("Resultado = %d", result);
                */
                printf("Resultado = %d\n", n1+n2);

                break;
            case 2:
                printf("Informe o primeiro numero: ");
                scanf("%d", &n1);

                printf("Informe o segundo numero: ");
                scanf("%d", &n2);

                /*
                result = n1*n2;
                printf("Resultado = %d", result);
                */
                printf("Resultado = %d\n", n1*n2);
                break;
            case 3:
                printf("Encerrando programa...");
                return 0;
                break;
            default:
                printf("Opção inválida\n");
                break;
        }

    }
}