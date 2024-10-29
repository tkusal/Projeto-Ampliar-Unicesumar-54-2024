#include <stdio.h>
#include <string.h>

int main() {

    char cidade[10];
    //buffer overflow - ok
    //por padrão scanf não lê espaços
    //considerar uma variavel para o caractere nulo (\0) - ok

    //scanf("%6[^\n]s", cidade);

    //gets(cidade);

    int idade;
    printf("Idade: ");
    scanf("%d", &idade);
    getchar();

    printf("Cidade: ");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[ strcspn(cidade, "\n") ] = '\0';
    getchar();

    printf("\n%s é bonito demais", cidade);

    return 0;
}