/*
    Desenvolver um programa em C que implemente o jogo de "Adivinhação de Números".
 
    Descrição do Jogo:
    O jogo consiste no computador escolher aleatoriamente um número num intervalo específico (por exemplo, de 1 a 100). O jogador deve adivinhar o número,
    e o programa fornecerá dicas se o número é maior ou menor que a tentativa do jogador. O jogo continua até que o jogador acerte o número ou deseje encerrar.
    
    Requisitos funcionais:
    RF01. Escolha do Intervalo: o jogador pode definir o intervalo de números, dentro do qual um número deve ser adivinhado
    RF02. Geração de Números Aleatórios: o programa deve gerar um número aleatório no intervalo definido.
    RF03. Entrada do Jogador: permitir que o jogador insira tentativas para adivinhar o número.
    RF04. Fornecimento de Dicas: informar ao jogador se o número adivinhado é maior, menor ou igual ao número gerado.
    RF05. Contagem de Tentativas: manter um contador de tentativas até o acerto.
    RG06. Opção de Sair: permitir que o jogador encerre o jogo a qualquer momento.
    RF07. Mensagem de Encerramento: exibir uma mensagem de encerramento, informando o número de tentativas realizadas.

    Requisitos Técnicos:
    RT01. Uso de Estruturas de Controle: implementar loops e condicionais para gerenciar o fluxo do jogo.
    RT02. Geração de Números Aleatórios: utilizar a classe ‘Random’ para gerar o número secreto.
    RT03. Tratamento de Exceções: incluir tratamento para entradas inválidas (por exemplo, caracteres não numéricos).
    RT04. Interação com o Usuário: exibir mensagens claras e informativas para guiar o jogador.

    Dica:
    Para escolha do número, o código precisará da bilbioteca da função srand() e rand() da biblioteca stdlib.h
    e da função time() da biblioteca time.h

    Biblioteca stdlib.h: https://petbcc.ufscar.br/stdlib/
    Biblioteca time.h: https://petbcc.ufscar.br/time/
    Ref.: https://cursos.alura.com.br/forum/topico-duvida-rand-srand-e-time-0-327979
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_secreto, palpite, tentativas;
    int intervalo_min, intervalo_max;
    char jogar_novamente;

    // Definindo a semente para gerar números aleatórios
    srand(time(NULL));

    do {
        tentativas = 0;

        // RF01. Escolha do Intervalo (com verificação de validade)
        do {
            printf("Bem-vindo ao jogo de adivinhacao!\n");
            printf("Defina o intervalo de numeros.\n");
            printf("Digite o valor minimo do intervalo: ");
            scanf("%d", &intervalo_min);
            printf("Digite o valor maximo do intervalo: ");
            scanf("%d", &intervalo_max);

            if (intervalo_max <= intervalo_min) {
                printf("Erro: o valor maximo deve ser maior que o valor minimo. Tente novamente.\n");
            }
        } while (intervalo_max <= intervalo_min);

        // RF02. Geração de Números Aleatórios
        numero_secreto = (rand() % (intervalo_max - intervalo_min + 1)) + intervalo_min;

        printf("O jogo comecou! Tente adivinhar o numero entre %d e %d.\n", intervalo_min, intervalo_max);

        while (1) {
            printf("Digite seu palpite: ");
            scanf("%d", &palpite);

            tentativas++;

            // RF04. Fornecimento de Dicas
            if (palpite < numero_secreto) {
                printf("O numero secreto e maior que %d.\n", palpite);
            } else if (palpite > numero_secreto) {
                printf("O numero secreto e menor que %d.\n", palpite);
            } else {
                // RF07. Mensagem de Encerramento
                printf("Parabens! Voce acertou o numero secreto %d em %d tentativas.\n", numero_secreto, tentativas);
                break;
            }
        }

        printf("Deseja jogar novamente? (S/N): ");
        scanf(" %c", &jogar_novamente);

    } while (jogar_novamente != 'N' && jogar_novamente != 'n');

    printf("Obrigado por jogar! Ate a proxima.\n");
    return 0;
}