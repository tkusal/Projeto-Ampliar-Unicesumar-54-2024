/*
Objetivo:
Desenvolver em C o jogo da velha (Tic-Tac-Toe) utilizando apenas a linha de comando.

Instruções:

Requisitos Funcionais:
RF01 - O jogo deve permitir dois jogadores humanos, que se revezam inserindo os símbolos 'X' e 'O' em um tabuleiro 3x3.
RF02 - Deve haver verificação automática de vitória, empate ou jogadas inválidas.
RF03 - O jogo deve exibir o tabuleiro atualizado após cada jogada e solicitar a próxima entrada do jogador.

Requisitos Técnicos:
RT01 - Utilizar uma matriz 3x3 para representar o tabuleiro do jogo.
RT02 - Implementar toda a lógica do jogo na linha de comando, incluindo a exibição do tabuleiro e a coleta de entradas dos jogadores.
RT03 - Incluir tratamento de exceções para evitar erros em tempo de execução, como inserção em células já ocupadas ou entradas inválidas.
RT04 - Ao final do jogo, exibir uma mensagem indicando o vencedor ou declarando empate, e oferecer a opção de iniciar uma nova partida.

Dicas:
- Use uma matriz bidimensional (char[3][3]) para representar o tabuleiro do jogo, iniciando todas as posições com um caractere especial (como '-') para indicar células vazias.
- Para cada jogada, peça ao jogador para inserir as coordenadas da célula onde deseja colocar seu símbolo (por exemplo, linha e coluna).
- Valide as entradas para garantir que estão nos limites do tabuleiro que a célula escolhida não esteja ocupada.
- Após cada jogada, atualize o tabuleiro e exiba-o novamente no console.
- Verifique as condições de vitória (três símbolos iguais em linha, coluna ou diagonal) ou empate (tabuleiro completo sem vencedor).
*/
#include <stdio.h>

int main() {
    char tabuleiro[3][3];
    int linha, coluna;
    int jogadorAtual = 1;
    char simboloAtual;
    int partida = 1;
    int jogadaValida, vitoria, completo, i, j;

    while (partida) {
        // RT01 - Inicializa o tabuleiro com células vazias
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                tabuleiro[i][j] = '-';
            }
        }

        // RF03 - Exibe o tabuleiro no console com as linhas e colunas
        printf("  0 1 2\n");
        for (i = 0; i < 3; i++) {
            printf("%d ", i);
            for (j = 0; j < 3; j++) {
                printf("%c ", tabuleiro[i][j]);
            }
            printf("\n");
        }

        int jogoAtivo = 1;
        while (jogoAtivo) {
            simboloAtual = (jogadorAtual == 1) ? 'X' : 'O';

            // RF01 - Alterna entre os jogadores 1 e 2
            printf("\nJogador %d (%c), informe a linha (0-2): ", jogadorAtual, simboloAtual);
            scanf("%d", &linha);
            printf("Jogador %d (%c), informe a coluna (0-2): ", jogadorAtual, simboloAtual);
            scanf("%d", &coluna);

            // RF03 e RT03 - Verifica se a jogada é válida (dentro dos limites e célula vazia)
            jogadaValida = (linha >= 0 && linha < 3 && coluna >= 0 && coluna < 3 && tabuleiro[linha][coluna] == '-');

            if (jogadaValida) {
                // RF01 - Realiza a jogada
                tabuleiro[linha][coluna] = simboloAtual;

                // RF03 - Exibe o tabuleiro atualizado
                printf("  0 1 2\n");
                for (i = 0; i < 3; i++) {
                    printf("%d ", i);
                    for (j = 0; j < 3; j++) {
                        printf("%c ", tabuleiro[i][j]);
                    }
                    printf("\n");
                }

                // RF02 - Verifica se o jogador atual venceu (linhas, colunas ou diagonais)
                vitoria = 0;
                for (i = 0; i < 3; i++) {
                    if ((tabuleiro[i][0] == simboloAtual && tabuleiro[i][1] == simboloAtual && tabuleiro[i][2] == simboloAtual) ||
                        (tabuleiro[0][i] == simboloAtual && tabuleiro[1][i] == simboloAtual && tabuleiro[2][i] == simboloAtual)) {
                        vitoria = 1;
                        break;
                    }
                }
                if ((tabuleiro[0][0] == simboloAtual && tabuleiro[1][1] == simboloAtual && tabuleiro[2][2] == simboloAtual) ||
                    (tabuleiro[0][2] == simboloAtual && tabuleiro[1][1] == simboloAtual && tabuleiro[2][0] == simboloAtual)) {
                    vitoria = 1;
                }

                if (vitoria) {
                    // RT04 - Exibe a mensagem de vitória
                    printf("Jogador %d venceu!\n", jogadorAtual);
                    jogoAtivo = 0;
                } else {
                    // RF02 - Verifica se o tabuleiro está completo (empate)
                    completo = 1;
                    for (i = 0; i < 3; i++) {
                        for (j = 0; j < 3; j++) {
                            if (tabuleiro[i][j] == '-') {
                                completo = 0;
                                break;
                            }
                        }
                    }
                    if (completo) {
                        // RT04 - Exibe a mensagem de empate
                        printf("Empate!\n");
                        jogoAtivo = 0;
                    } else {
                        // RF01 - Alterna entre os jogadores
                        jogadorAtual = (jogadorAtual == 1) ? 2 : 1;
                    }
                }
            } else {
                // RT03 - Mensagem de jogada inválida
                printf("Jogada inválida. Tente novamente.\n");
            }
        }

        char resposta;
        printf("Fim do jogo. Deseja jogar novamente? (S/N): ");
        scanf(" %c", &resposta);
        if (resposta != 'S' && resposta != 's') {
            // Encerrar a partida
            printf("Obrigado por jogar!\n");
            partida = 0;
        } else {
            jogadorAtual = 1;
        }
    }

    return 0;
}
