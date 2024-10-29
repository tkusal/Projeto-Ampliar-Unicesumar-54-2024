#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int limite_inferior, limite_superior, numero_secreto, tentativa;
    int tentativas = 0;
    char continuar;

    // Semente para geração de números aleatórios
    srand(time(NULL));

    // Escolha do intervalo
    printf("Bem-vindo ao Jogo de Adivinhação de Números!\n");
    printf("Digite o limite inferior: ");
    scanf("%d", &limite_inferior);
    printf("Digite o limite superior: ");
    scanf("%d", &limite_superior);

    // Geração do número aleatório no intervalo definido
    numero_secreto = (rand() % (limite_superior - limite_inferior + 1)) + limite_inferior;

    // Início do jogo
    do {
        tentativas++;  // Incrementa o contador de tentativas
        printf("Tentativa %d: Adivinhe o número entre %d e %d (ou digite -1 para sair): ", tentativas, limite_inferior, limite_superior);
        scanf("%d", &tentativa);

        // Opção de sair
        if (tentativa == -1) {
            printf("Você escolheu sair do jogo.\n");
            break;
        }

        // Fornecimento de dicas
        if (tentativa < numero_secreto) {
            printf("O número secreto é maior que %d.\n", tentativa);
        } else if (tentativa > numero_secreto) {
            printf("O número secreto é menor que %d.\n", tentativa);
        } else {
            printf("Parabéns! Você acertou o número %d em %d tentativas!\n", numero_secreto, tentativas);
        }

    } while (tentativa != numero_secreto);

    // Mensagem de encerramento
    if (tentativa != -1) {
        printf("Obrigado por jogar! Você fez %d tentativas.\n", tentativas);
    }

    return 0;  // Finaliza o programa
}
