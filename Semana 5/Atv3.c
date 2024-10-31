/*
    Escreva um programa que receba a informação de 5 carros.
    Cada carro possui Ano, Modelo, Marca e Preço.
    O programa deve retornar ao usuário, o preço do carro depreciado em 10%.
    A saída deverá ser Marca, Modelo, Ano, Preço Inicial e Preço Depreciado.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    int ano;
    char modelo[15];
    char marca[15];
    float preco;
} Carro;

int main()
{
    Carro carro[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Informe a Marca: ");
        fgets(carro[i].marca, sizeof(carro[i].marca), stdin);
        carro[i].marca[strcspn(carro[i].marca, "\n")] = '\0';

        printf("Informe o Modelo: ");
        fgets(carro[i].modelo, sizeof(carro[i].modelo), stdin);
        carro[i].modelo[strcspn(carro[i].modelo, "\n")] = '\0';

        printf("Informe o ano: ");
        scanf("%d", &carro[i].ano);
        getchar();

        printf("Informe o preço: ");
        scanf("%f", &carro[i].preco);
        getchar();
    }

    for (int i = 0; i < 5; i++)
    {
        printf("---- Carro %d ----\n", i + 1);
        printf("Marca: %s\n", carro[i].marca);
        printf("Modelo: %s\n", carro[i].modelo);
        printf("Ano: %d\n", carro[i].ano);
        printf("Preço inicial: %.2f\n", carro[i].preco);
        printf("Preço depreciado: %.2f\n", carro[i].preco - (carro[i].preco * 0.10));
    }

    return 0;
}
