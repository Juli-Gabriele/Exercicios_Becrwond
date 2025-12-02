#include <stdio.h>
#include <string.h>

int main() {

    char Tipo1[15], Tipo2[15];
    int c = 0, i = 0;

    scanf("%d", &c);

    for (i = 0; i < c; i++){
        scanf("%s", Tipo1);
        scanf("%s", Tipo2);


        if (Tipo1[2] == Tipo2[2]) {
            printf("empate\n");
            continue;
        }

        if ((Tipo1[0] == 't' && Tipo2[2] == 'p') ||
            (Tipo1[0] == 't' && Tipo2[0] == 'l') ||
            (Tipo1[2] == 'd' && Tipo2[0] == 't') ||
            (Tipo1[0] == 's' && Tipo2[0] == 't') ||
            (Tipo1[2] == 'd' && Tipo2[0] == 'l') ||
            (Tipo1[2] == 'p' && Tipo2[2] == 'd') ||
            (Tipo1[0] == 'l' && Tipo2[2] == 'p') ||
            (Tipo1[2] == 'p' && Tipo2[0] == 's') ||
            (Tipo1[0] == 's' && Tipo2[2] == 'd') ||
            (Tipo1[2] == 'd' && Tipo2[0] == 'l') ||
            (Tipo1[0] == 'l' && Tipo2[0] == 's')) {

            printf("rajesh\n");

        } else {
            printf("sheldon\n");
        }
    }

    return 0;
}
