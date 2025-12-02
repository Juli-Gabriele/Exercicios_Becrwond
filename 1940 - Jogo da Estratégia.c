#include <stdio.h>

int main() {
    int j, r;
    scanf("%d %d", &j, &r);

    int pontos[j];
    for (int i = 0; i < j; i++)
        pontos[i] = 0;

    for (int rodada = 0; rodada < r; rodada++) {
        for (int jogador = 0; jogador < j; jogador++) {
            int p;
            scanf("%d", &p);
            pontos[jogador] += p;
        }
    }

    int vencedor = 0;
    for (int i = 1; i < j; i++) {
        if (pontos[i] >= pontos[vencedor]) {
            vencedor = i;
        }
    }

    printf("%d\n", vencedor + 1);

    return 0;
}
