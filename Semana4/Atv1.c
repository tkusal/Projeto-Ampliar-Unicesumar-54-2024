#include <stdio.h>

int main() {

    int idades[5];

    for (int i = 0; i <= 4; i++)
    {
        printf("Informe uma idade: ");
        scanf("%d", &idades[i]);
    }    

    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", idades[i]);
    }
    
    return 0;
}