/*
    Escreva um programa que seja uma agenda de até 100 tarefas.
    Cada tarefa (struct) terá Descrição, Data (struct com dia, mes e ano), Hora (struct com hora e minuto)
    e Status (Concluído ou Pendente)

    O programa deverá ser encerrado apenas quando o usuário escolher a opção de sair.
    O prorama deverá apresentar um menu com as seguintes funções:
    1. Cadastrar uma nova tarefa
    2. Listar todas as tarefas Pendentes
    3. Listar todas as tarefas Concluídas
    4. Sair
*/

#include <string.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct
{
    int hora;
    int minuto;
} Hora;

typedef struct
{
    int dia, mes, ano;
} Data;

typedef struct {
    char descricao[50];
    Data data;
    Hora hora;
    bool status;
} Tarefa;

#define MAX_TAREFAS 100

int main() {
    int opcao, cont_tarefas = 0;
    Tarefa tarefa[MAX_TAREFAS];

    while(1) {
        
        printf("Escolha uma opção:\n1. Cadastrar uma nova tarefa\n2. Listar todas as tarefas Pendentes\n3. Listar todas as tarefas Concluídas\n4. Sair");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
            case 1:
                /* Cadastrar nova tarefa */
                if (cont_tarefas == MAX_TAREFAS) {
                    prinf("Não é possível cadastrar novas tarefas");
                    break;
                }
                
                break;
            case 2:
                /* Listar Pendentes */
                break;
            case 3:
                /* Listar Concluidos */
                break;
            case 4:
                printf("Encerrando...");
                return 0;
                break;
            
            default:
                printf("Opção inválida.\n");
                break;
        }
    }
}