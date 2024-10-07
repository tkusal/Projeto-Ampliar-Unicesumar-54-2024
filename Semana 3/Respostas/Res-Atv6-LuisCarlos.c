/*
    Escreva um programa em C que peça ao usuário o salário e o tempo de trabalho em anos.
    O programa deverá calcular um bônus de 5% sobre o salário se o tempo de trabalho for superior a 5 anos.
*/

#include <stdio.h> // Para printf e scanf

// Função principal
int main() { 
    // Declaração das variáveis
    float salario, bonus; 
    float tempoTrabalho; 
    char resposta;

    do { // Laço de repetição para calcular várias vezes
        printf("Informe o salário: "); // Solicita o salário
        scanf("%f", &salario); // Lê o salário

        printf("Informe o tempo de trabalho em anos: "); // Solicita o tempo de trabalho
        scanf("%f", &tempoTrabalho); // Lê o tempo de trabalho

        if (tempoTrabalho > 5) { // Verifica se o tempo de trabalho é superior a 5 anos
            bonus = salario * 0.05; // Calcula o bônus de 5%
            salario += bonus; // Adiciona o bônus ao salário

            printf("O bônus de 5%% foi aplicado. O novo salário é de R$ %.2f\n", salario); // Exibe o novo salário
        } else { // Se o tempo de trabalho não for superior a 5 anos
            printf("O bônus de 5%% não foi aplicado. O salário é de R$ %.2f\n", salario); // Exibe o salário sem bônus
        }

        printf("Deseja calcular novamente? (s/n): "); // Pergunta se deseja calcular novamente
        scanf(" %c", &resposta); // Lê a resposta

    } while (resposta == 's' || resposta == 'S'); // Repete o cálculo enquanto a resposta for 's' ou 'S'

    printf("Você encerrou a execução.\n"); // Exibe mensagem para sair
    getchar(); // Para capturar o Enter anterior
    getchar(); // Para esperar a entrada do usuário

    return 0; // fim do programa
}