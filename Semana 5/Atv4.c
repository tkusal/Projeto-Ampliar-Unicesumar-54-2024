/*
    Escreva um progama em C que permita o usuário cadastrar ATÉ 10 produtos.
    Cada produto deve ter uma descrição, um preço e uma quantidade em estoque.
    O programa deve permitir ao usuário cadastrar produtos, listar todos os produtos cadastrados.
    O programa só poderá ser encerrado quando o usuário escolher a opção de sair em um menu.
*/

#include <string.h>
#include <stdio.h>

#define MAX_PRODUTOS 10

typedef struct {
    char descricao[15];
    float preco;
    int qtdEstoque;
} Produto;

int main() {
    Produto produtos[MAX_PRODUTOS];
    int opcao, contador_produtos = 0;

    while (1)
    {
        printf("\nEscolha uma das opções a seguir: \n");
        printf("1. Cadastrar produto\n2. Listar produtos\n3. Sair\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
            case 1:
                /*Cadastrar produto*/
                if (contador_produtos == MAX_PRODUTOS) {
                    printf("Não há mais espaços para novos produtos.\n");
                    break;
                }

                printf("Informe a decrição: ");
                fgets(produtos[contador_produtos].descricao, sizeof(produtos[contador_produtos].descricao), stdin);
                produtos[contador_produtos].descricao[strcspn(produtos[contador_produtos].descricao, "\n")] = '\0';

                printf("Informe o preço: ");
                scanf("%f", &produtos[contador_produtos].preco);
                getchar();

                printf("Quantidade em estoque: ");
                scanf("%d", &produtos[contador_produtos].qtdEstoque);
                getchar();

                contador_produtos++;
                break;
            case 2:
                /*Listar produtos*/
                for (int i = 0; i < contador_produtos; i++)
                {
                    printf("-- Produto %d --\n", i+1);
                    printf("Descrição: %s\n", produtos[i].descricao);
                    printf("Preço: %.2f\n", produtos[i].preco);
                    printf("Quantidade: %d\n", produtos[i].qtdEstoque);
                }
                printf("=======================\n");            
                break;
            case 3:
                printf("Encerrando sistema...");
                return 0;
                break;        
            default:
                printf("Opção inválida.\n");
                break;
        }
    }
}