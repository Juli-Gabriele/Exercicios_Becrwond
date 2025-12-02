#include <stdio.h>
#include <string.h>

int main() {
    char mens [100], minu[100];
    int i, j, g, q =0;
    scanf("%d",&q);

    for (int g = 0; g < q; g++){

        scanf(" %[^\n]",mens);
        j = 0;
        for (i = 0; mens[i] != '\0'; i++){
             if (mens[i] >= 'a' && mens[i] <= 'z') {
                j++;
        }
        }
        int pos = j - 1;

        for (i = 0; mens[i] != '\0'; i++){
             if (mens[i] >= 'a' && mens[i] <= 'z') {
               minu[pos] = mens[i];
            pos--;
        }
        }

        minu[j] = '\0';
        printf("%s\n",minu);

        }
    return 0;

}
