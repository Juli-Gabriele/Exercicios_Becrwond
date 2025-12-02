#include <stdio.h>
#include <string.h>

int main() {

    int q;
    char palavra[10];

    scanf("%d", &q);

    while (q--) {

        scanf("%s", palavra);

        if (strlen(palavra) == 5) {
            printf("3\n");
        }

        else {
            int cont = 0;

            if (palavra[0] == 'o') cont++;
            if (palavra[1] == 'n') cont++;
            if (palavra[2] == 'e') cont++;

            if (cont >= 2) {
                printf("1\n");
            } else {
                printf("2\n");
            }
        }
    }

    return 0;
}
