#include <stdio.h>
#include<string.h>
 int main(){
    char frase[100];
    int q = 0, i;
    scanf("%[^\n]",frase);
    for(i = 0; frase[i] != '\0'; i++){
        char c = frase[i];

            if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            q++;
        }
        }

    printf("%d", q);

 return 0;
 }


