#include <stdio.h>
#include <string.h>

int main() {
    char b[15]; 
    int a;


    printf("Digite uma frase: ");
    fgets(b, sizeof(b), stdin); 

    a = strlen(b);

    if (b[a - 1] == '\n') {
        b[a - 1] = '\0';
        a--; 
    }
   
    printf("Resultado:");
    for (int i = a - 1; i >= 0; i--) {
        putchar(b[i]);
    }
    return 0;
}
