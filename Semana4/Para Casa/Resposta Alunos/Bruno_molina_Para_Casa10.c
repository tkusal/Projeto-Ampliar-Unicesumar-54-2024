#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

void exetb_Tabu(char tabuleiro[SIZE][SIZE]) {
    printf("\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
        if (i < SIZE - 1) {
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

void inicia_Tabuleiro(char tabuleiro[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            tabuleiro[i][j] = '-';
        }
    }
}

int Vitoria(char tabuleiro[SIZE][SIZE], char jogador) {
    for (int i = 0; i < SIZE; i++) {
        if ((tabuleiro[i][0] == jogador && tabuleiro[i][1] == jogador && tabuleiro[i][2] == jogador) ||
            (tabuleiro[0][i] == jogador && tabuleiro[1][i] == jogador && tabuleiro[2][i] == jogador)) {
            return 1;
        }
    }
    if ((tabuleiro[0][0] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][2] == jogador) ||
        (tabuleiro[0][2] == jogador && tabuleiro[1][1] == jogador && tabuleiro[2][0] == jogador)) {
        return 1;
    }
    return 0;
}

int Empate(char tabuleiro[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (tabuleiro[i][j] == '-') {
                return 0;
            }
        }
    }
    return 1;
}

void jogar() {
    char tabuleiro[SIZE][SIZE];
    char jogadorAtual = 'X';
    int jogando = 1;
    int linha, coluna;

    inicia_Tabuleiro(tabuleiro);

    while (jogando) {
        exetb_Tabu(tabuleiro);

        printf("Jogador %c, insira a linha e coluna (0, 1 ou 2): ", jogadorAtual);
        scanf("%d %d", &linha, &coluna);


        if (linha < 0 || linha >= SIZE || coluna < 0 || coluna >= SIZE || tabuleiro[linha][coluna] != '-') {
            printf("Posição inválida! Tente novamente.\n");
            continue;
        }

 
        tabuleiro[linha][coluna] = jogadorAtual;


        if (Vitoria(tabuleiro, jogadorAtual)) {
            exetb_Tabu(tabuleiro);
            printf("Jogador %c venceu!\n", jogadorAtual);
            jogando = 0;
        } 

        else if (Empate(tabuleiro)) {
            exetb_Tabu(tabuleiro);
            printf("Empate!\n");
            jogando = 0;
        } else {
      
            jogadorAtual = (jogadorAtual == 'X') ? 'O' : 'X';
        }
    }

    char opcao;
    printf("jogar novamente? (s/n): ");
    scanf(" %c", &opcao);

    if (opcao == 's' || opcao == 'S') {
        jogar();
    } else {
        printf("Obrigado por jogar!\n");
    }
}

int main() {
    jogar();
    return 0;
}
