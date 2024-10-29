#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

#define MAX_ERROS 7
#define NUM_PALAVRAS 5

void escolherPalavra(char *palavra);
void inicializarPalavraSecreta(char *palavra, char *palavraSecreta);
int verificarLetra(char letra, char *palavra, char *palavraSecreta);
int verificarLetraRepetida(char letra, char *letrasTentadas, int tentativas);

int main() {
    char *palavras[NUM_PALAVRAS] = {"COMPUTADOR", "PROGRAMACAO", "LINGUAGEM", "FORCA", "JOGO"};
    char palavra[20];
    char palavraSecreta[20];
    char letrasTentadas[26];
    int erros = 0;
    int tentativas = 0;

    escolherPalavra(palavra);
    inicializarPalavraSecreta(palavra, palavraSecreta);

    printf("Bem-vindo ao jogo da Forca!\n");

    while (erros < MAX_ERROS && strcmp(palavra, palavraSecreta) != 0) {
        printf("\nPalavra: %s\n", palavraSecreta);
        printf("Erros: %d/%d\n", erros, MAX_ERROS);

        char letra;
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        letra = toupper(letra);

        if (verificarLetraRepetida(letra, letrasTentadas, tentativas)) {
            printf("Você já tentou essa letra!\n");
            continue;
        }

        letrasTentadas[tentativas++] = letra;

        if (!verificarLetra(letra, palavra, palavraSecreta)) {
            erros++;
            printf("Letra incorreta!\n");
        }
    }

    if (strcmp(palavra, palavraSecreta) == 0) {
        printf("\nParabéns! Você adivinhou a palavra: %s\n", palavra);
    } else {
        printf("\nVocê perdeu! A palavra era: %s\n", palavra);
    }

    return 0;
}

void escolherPalavra(char *palavra) {
    srand(time(NULL));
    char *listaPalavras[NUM_PALAVRAS] = {"COMPUTADOR", "PROGRAMACAO", "LINGUAGEM", "FORCA", "JOGO"};
    strcpy(palavra, listaPalavras[rand() % NUM_PALAVRAS]);
}

void inicializarPalavraSecreta(char *palavra, char *palavraSecreta) {
    for (int i = 0; i < strlen(palavra); i++) {
        palavraSecreta[i] = '_';
    }
    palavraSecreta[strlen(palavra)] = '\0';
}

int verificarLetra(char letra, char *palavra, char *palavraSecreta) {
    int acertou = 0;
    for (int i = 0; i < strlen(palavra); i++) {
        if (palavra[i] == letra) {
            palavraSecreta[i] = letra;
            acertou = 1;
        }
    }
    return acertou;
}

int verificarLetraRepetida(char letra, char *letrasTentadas, int tentativas) {
    for (int i = 0; i < tentativas; i++) {
        if (letrasTentadas[i] == letra) {
            return 1;
        }
    }
    return 0;
}