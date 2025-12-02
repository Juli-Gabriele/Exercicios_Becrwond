#include <stdio.h>

int main() {
    int n, m, i, j,indice;

    scanf("%d %d",&n,&m);
    double ma[n][m], soma = 0, maior = 0;

    for(i = 0; i < n; i++ ){
         soma = 0;
        for (j = 0; j < m; j++){
        scanf("%lf",&ma[i][j]);

        soma+= ma[i][j];

    }
        if (soma > maior){
            maior= soma;
            indice = i;
    }


    }
     printf("%d", indice);


    return 0;
}

