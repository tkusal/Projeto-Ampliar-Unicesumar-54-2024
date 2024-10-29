#include <stdio.h>
#include <math.h>

int main() {
    int a, j;

    for (a = 1; a <= 9; a++) {
        printf("Tabuada de multiplicacao %d:\n", a);

        for (j = 1; j <= 9; j++) {
            printf("%d x %d = %d\n", a, j, a * j);
        }
    }

    return 0;
}
