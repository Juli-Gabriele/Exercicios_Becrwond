#include <stdio.h>

int main() {
    int m, n, i, j;

    scanf("%d %d", &n, &m);
    int ma[n][m];

    // Lendo a matriz
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &ma[i][j]);
        }
    }

    // Imprimindo a matriz espelhada
    for (i = 0; i < n; i++) {
        for (j = m - 1; j >= 0; j--) {
            printf("%d ", ma[i][j]);
        }
        printf("\n"); // quebra de linha a cada linha da matriz
    }

    return 0;
}
