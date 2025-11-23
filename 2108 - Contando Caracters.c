#include <stdio.h>
#include <string.h>

int main() {
    int i, j, cont, maior, maior2 = 0;
    char pal1[100], pal2[100], maior_palavra[100], maior_loop[100] = "";

    scanf("%[^\n]", pal1);

    while (pal1[0] != '0') {

        i = j = cont = maior = 0;
        maior_palavra[0] = '\0';

        while (pal1[i] != '\0') {

            if (pal1[i] != ' ') {
                pal2[j] = pal1[i];
                j++;
                cont++;
            } else {
                pal2[j] = '\0';
                printf("%d-", cont);

                if (cont > maior) {
                    maior = cont;
                    strcpy(maior_palavra, pal2);
                }

                cont = 0;
                j = 0;
            }

            i++;
        }


        pal2[j] = '\0';

        printf("%d\n", cont);

        if (cont > maior){
            maior = cont;
            strcpy(maior_palavra, pal2);
        }
        if (maior >= maior2) {
             maior2 = maior;
            strcpy(maior_loop, maior_palavra);
        }


        scanf(" %[^\n]", pal1);
    }
        printf("\nThe biggest word: %s\n", maior_loop);

    return 0;
}
