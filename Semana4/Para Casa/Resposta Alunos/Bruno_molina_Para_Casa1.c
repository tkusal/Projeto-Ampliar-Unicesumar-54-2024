#include <stdio.h>

int main() {
    int idades[10];
    int i, mais_nova_1, mais_velha_2;

    for (i = 0; i < 10; i++) {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
    }

    mais_nova_1 = idades[0];
    mais_velha_2 = idades[0];


    for (i = 1; i < 10; i++) {
        if (idades[i] < mais_nova_1) {
            mais_nova_1 = idades[i];
        }
        if (idades[i] > mais_velha_2) {
            mais_velha_2 = idades[i];
        }
    }


    printf("mais nova %d anos.\n", mais_nova_1);
    printf("mais velha %d anos.\n", mais_velha_2);

    return 0;
}