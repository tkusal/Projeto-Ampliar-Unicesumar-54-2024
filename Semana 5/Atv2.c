/*
    Escreva um programa que cadastre um cliente.
    Cliente tem:
        - Nome
        - CPF
        - Endereço
    Endereço tem:
        - Rua
        - Numero
        - Bairro    
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char rua[30];
    int numero;
    char bairro[30];
}Endereco;

struct Cliente {
    char nome[30];
    char CPF[15];
    Endereco endereco;
};

int main () {
    struct Cliente cliente;

    printf("Nome: ");
    scanf("%29s", cliente.nome);    
    getchar();

    printf("CPF: ");
    scanf("%14s", cliente.CPF);
    getchar();

    printf("Nome da Rua: ");
    fgets(cliente.endereco.rua, sizeof(cliente.endereco.rua), stdin);
    cliente.endereco.rua[strcspn(cliente.endereco.rua, "\n")] = '\0';
    getchar();

    printf("Numero: ");
    scanf("%d", &cliente.endereco.numero);
    getchar();

    printf("Bairro: ");
    scanf("%29s", cliente.endereco.bairro);
    getchar();

    printf("Nome: %s,\nCPF: %s,\nRua: %s", cliente.nome, cliente.CPF, cliente.endereco.rua);

}