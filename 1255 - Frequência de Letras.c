#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar(); 

    while (n--) {
        char frase[201];
        int freq[26] = {0};
        int i, maior = 0;

        do {
            fgets(frase, sizeof(frase), stdin);
        } while (frase[0] == '\n');

        for (i = 0; frase[i] != '\0'; i++) {
            if (isalpha(frase[i])) {
                int index = tolower(frase[i]) - 'a';
                freq[index]++;
                if (freq[index] > maior)
                    maior = freq[index];
            }
        }

        for (i = 0; i < 26; i++) {
            if (freq[i] == maior)
                printf("%c", i + 'a');
        }
        printf("\n");
    }

    return 0;
}
