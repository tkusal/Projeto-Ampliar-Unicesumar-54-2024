#include <stdio.h>

int main()
{

    int vetor[5] = {1, 2, 3, 4, 5};
    int *ponteiro;

    ponteiro = vetor;

    printf("%p\n", ponteiro);
    printf("%p\n", ponteiro + 1);
    printf("%p\n", ponteiro + 2);
    printf("%p\n", ponteiro + 3);
    printf("%p\n", ponteiro + 4);

    printf("---------------\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", &vetor[i]);
    }

    return 0;
}