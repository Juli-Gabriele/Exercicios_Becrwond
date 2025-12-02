#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char frase[100];
    int i, q = 0;

    scanf("%[^\n]", frase);

    int tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++) {

        // conta palavra quando encontra início de palavra
        if (!isspace(frase[i]) && 
            (i == 0 || isspace(frase[i - 1]))) {
            q++;
        }
    }

    printf("%d\n", q);

    return 0;
}
