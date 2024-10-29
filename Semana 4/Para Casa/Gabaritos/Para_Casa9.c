/*
    Desenvolver um programa em C que implemente o jogo de "Forca".

    Descrição do Jogo: O jogo consiste em um jogador tentar adivinhar uma palavra secreta fornecida pelo computador. A cada rodada, o jogador sugere uma letra. Se a letra estiver presente na palavra secreta, ela é revelada nas posições corretas. Caso contrário, o jogador acumula um erro. O jogo termina quando o jogador adivinha completamente a palavra ou comete 7 erros.

    Requisitos funcionais:

    RF01. Escolha da Palavra: O computador deve escolher uma palavra secreta de um conjunto pré-definido de palavras.
    RF02. Entrada do Jogador: Permitir que o jogador insira uma letra a cada rodada.
    RF03. Verificação de Letra: O programa deve verificar se a letra sugerida pelo jogador está presente na palavra secreta.
    RF04. Exibição Parcial da Palavra: A cada acerto, a letra adivinhada deve ser exibida na posição correta da palavra, enquanto as letras não adivinhadas permanecem ocultas (por exemplo, com "_").
    RF05. Contagem de Erros: Cada erro do jogador aumenta o contador de erros, até um limite máximo de 7 erros.
    RF06. Fim de Jogo: O jogo termina quando o jogador completa a palavra ou quando atinge o limite de 7 erros.
    RF07. Mensagem de Vitória ou Derrota: Exibir uma mensagem final indicando se o jogador venceu ou perdeu.
    
    Requisitos Técnicos:

    RT01. Uso de Estruturas de Controle: Implementar loops e condicionais para gerenciar o fluxo do jogo.
    RT02. Manipulação de Strings: Utilizar arrays de caracteres para armazenar e manipular a palavra secreta e as tentativas do jogador.
    RT03. Verificação de Letra Repetida: Evitar que o jogador insira a mesma letra mais de uma vez.
    RT04. Contador de Erros: Implementar um contador que permita no máximo 7 erros antes de o jogador perder o jogo.
    RT05. Interação com o Usuário: Exibir mensagens claras e informativas para guiar o jogador ao longo do jogo.
    
    Dica:
    utilize funções de manipulação de strings da biblioteca string.h para comparar e exibir o progresso da palavra.
    Função ctype.h com a função toupper() ou tolower(), para manter os caracteres sempre maúsculos ou minúsculos.

    As bibliotecas da atividade 8 (stdlib.h, time.h) podem ser necessárias.
    
    Biblioteca strin.h: https://petbcc.ufscar.br/string/
    Biblioteca ctype.h: https://petbcc.ufscar.br/ctypefuncoes/
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_ERROS 7 // RT04: Define o limite máximo de erros permitidos

int main() {
    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    // RF01: Conjunto pré-definido de palavras
    char palavras[5][50] = {"BANANA", "ABACAXI", "UVA", "MORANGO", "LARANJA"};
    char palavra_secreta[20];
    char chutes[26];
    int num_chutes = 0;
    int erros = 0;
    int acertos = 0;
    int palavra_escolhida = rand() % 5; // RF01: Sorteia uma palavra do conjunto

    // Copia a palavra secreta para outra variável
    int tamanho_palavra = strlen(palavras[palavra_escolhida]);
    for (int i = 0; i < tamanho_palavra; i++) {
        palavra_secreta[i] = palavras[palavra_escolhida][i];
    }
    palavra_secreta[tamanho_palavra] = '\0';

    char palavra_parcial[20];

    // Inicializa palavra parcial com "_"
    for (int i = 0; i < tamanho_palavra; i++) {
        palavra_parcial[i] = '_'; // RF04: Oculta as letras não adivinhadas
    }
    palavra_parcial[tamanho_palavra] = '\0';

    printf("Bem-vindo ao jogo da Forca!\n");

    // Loop do jogo (RF06)
    while (erros < MAX_ERROS && acertos < tamanho_palavra) {
        printf("\nPalavra: %s\n", palavra_parcial); // RF04: Exibe a palavra parcial
        printf("Chutes até agora: ");
        for (int i = 0; i < num_chutes; i++) { // RF02: Exibe os chutes feitos
            printf("%c ", chutes[i]);
        }
        printf("\nErros: %d\n", erros); // RF05: Exibe o número de erros

        char letra; // RF02: Armazena a letra digitada pelo jogador
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        letra = toupper(letra);

        // Verifica se a letra já foi chutada (RF03)
        int letra_repetida = 0;
        for (int i = 0; i < num_chutes; i++) {
            if (chutes[i] == letra) {
                letra_repetida = 1;
                break;
            }
        }

        if (letra_repetida) { // RF03
            printf("Você já chutou essa letra!\n");
            continue; // RT01: Continua para a próxima iteração do loop
        }

        chutes[num_chutes] = letra; // Adiciona a letra aos chutes
        num_chutes++;

        // Verifica se a letra está na palavra secreta (RF03)
        int encontrou = 0;
        for (int i = 0; i < tamanho_palavra; i++) {
            if (palavra_secreta[i] == letra) {
                palavra_parcial[i] = letra; // Atualiza a palavra parcial
                acertos++;
                encontrou = 1; // RF03: A letra foi encontrada
            }
        }

        if (!encontrou) { // RF03
            erros++; // RT04: Aumenta o contador de erros
            printf("Letra incorreta!\n");
        } else {
            printf("Letra correta!\n");
        }
    }

    // Fim de jogo (RF06 e RF07)
    if (acertos == tamanho_palavra) {
        printf("\nParabéns! Você adivinhou a palavra: %s\n", palavra_secreta); // RF07
    } else {
        printf("\nVocê perdeu! A palavra era: %s\n", palavra_secreta); // RF07
    }

    return 0;
}
