#include <stdio.h>
#include <string.h>

void verificacao(char classe[], char grupo[], char tipo[]) {

    if (strlen(classe) == 10) {
        if (strlen(grupo) == 3) {
            if (strlen(tipo) == 9) printf("aguia\n");
            if (strlen(tipo) == 7) printf("bomba\n");
        } else if (strlen(grupo) == 8) {
            if (strlen(tipo) == 7) printf("homem\n");
            if (strlen(tipo) == 9) printf("vaca\n");
        }
    } else if (strlen(classe) == 12) {
        if (strlen(grupo) == 6) {
            if (strlen(tipo) == 9) printf("largata\n");
            if (strlen(tipo) == 10) printf("pulga\n");
        } else if (strlen(grupo) == 8) {
            if (strlen(tipo) == 10) printf("sanguessuga\n");
            if (strlen(tipo) == 7) printf("minhoca\n");
        }
    }
}

int main() {

    char classe[20], grupo[20], tipo[20];

    scanf("%s", classe);
    scanf("%s", grupo);
    scanf("%s", tipo);

    verificacao(classe, grupo, tipo);

    return 0;
}
