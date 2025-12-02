#include <stdio.h>
#include <string.h>

int main() {
    int q;
    char mens[110];
    
    scanf("%d", &q);

    while (q--) {
        scanf("%s", mens);

        int tam = 0;

        for (int i = 0; mens[i] != '\0'; i++) {
            switch (mens[i]) {
                case '1': tam += 2; break;
                case '2': tam += 5; break;
                case '3': tam += 5; break;
                case '4': tam += 4; break;
                case '5': tam += 5; break;
                case '6': tam += 6; break;
                case '7': tam += 3; break;
                case '8': tam += 7; break;
                case '9': tam += 6; break;
                case '0': tam += 6; break;
            }
        }

        printf("%d leds\n", tam);
    }

    return 0;
}
