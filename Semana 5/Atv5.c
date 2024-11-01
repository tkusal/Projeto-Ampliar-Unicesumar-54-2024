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

typedef struct
{
    char descricao[50];
    Data data;
    Hora hora;
    bool status;
} Tarefa;

#define MAX_TAREFAS 100

int main()
{
    int opcao, cont_tarefas = 0;
    Tarefa tarefa[MAX_TAREFAS];

    while (1)
    {

        printf("\nEscolha uma opção:\n1. Cadastrar uma nova tarefa\n2. Listar todas as tarefas Pendentes\n3. Listar todas as tarefas Concluídas\n4. Sair\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            /* Cadastrar nova tarefa */
            if (cont_tarefas == MAX_TAREFAS)
            {
                printf("Não é possível cadastrar novas tarefas");
                break;
            }
            printf("Informe o dia para a data da tarefa: ");
            scanf("%d", &tarefa[cont_tarefas].data.dia);
            getchar();

            printf("Informe o mês para a data da tarefa: ");
            scanf("%d", &tarefa[cont_tarefas].data.mes);
            getchar();

            printf("Informe o ano para a data da tarefa: ");
            scanf("%d", &tarefa[cont_tarefas].data.ano);
            getchar();

            printf("Informe a hora para a execução da tarefa: ");
            scanf("%d", &tarefa[cont_tarefas].hora.hora);
            getchar();

            printf("Informe o minuto para a execução da tarefa: ");
            scanf("%d", &tarefa[cont_tarefas].hora.minuto);
            getchar();

            printf("Descreva a tarefa: \n");
            fgets(tarefa[cont_tarefas].descricao, sizeof(tarefa[cont_tarefas].descricao), stdin);
            tarefa[cont_tarefas].descricao[strcspn(tarefa[cont_tarefas].descricao, "\n")] = '\0';

            do
            {
                char temp;
                printf("Esta tarefa está concluída? (S/N)");
                scanf("%c", &temp);
                if (temp == 's' || temp == 'S')
                {
                    tarefa[cont_tarefas].status = true;
                    printf("A tarefa está concluída.\n");                    
                    break;
                }
                else if (temp == 'n' || temp == 'N')
                {
                    tarefa[cont_tarefas].status = false;
                    printf("A tarefa está pendente.\n");
                    break;
                }
                else
                {
                    printf("Resposta inválida.\n");
                }
            } while (1);
            cont_tarefas++;
            break;
        case 2:
            /* Listar Pendentes */
            printf("\n# Tarefas Pendentes #\n");
            for (int i = 0; i < cont_tarefas; i++)
            {                
                if (tarefa[i].status == false)
                {
                    printf("\n-- Tarefa %d --\n", i + 1);
                    printf("Data/Hora: %d/%d/%d %d:%d\n", tarefa[i].data.dia, tarefa[i].data.mes, tarefa[i].data.ano, tarefa[i].hora.hora, tarefa[i].hora.minuto);
                    printf("Descrição: %s\n", tarefa[i].descricao);
                }
            }
            break;
        case 3:
            /* Listar Concluidos */
            printf("\n# Tarefas Concluídas #\n");
            for (int i = 0; i < cont_tarefas; i++)
            {
                if (tarefa[i].status == true)
                {
                    printf("\n-- Tarefa %d --\n", i + 1);
                    printf("Data/Hora: %d/%d/%d %d:%d\n", tarefa[i].data.dia, tarefa[i].data.mes, tarefa[i].data.ano, tarefa[i].hora.hora, tarefa[i].hora.minuto);
                    printf("Descrição: %s\n", tarefa[i].descricao);
                }
            }
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