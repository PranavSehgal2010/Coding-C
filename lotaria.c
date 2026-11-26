#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) {
    int chave[5], palpite[5], acertos = 0;
    srand((unsigned)time(NULL));
    for (int i = 0; i < 5; i++)
        chave[i] = rand() % 50 + 1;
    for (int i = 0; i < 5; i++) {
        do {
            printf("Numero %d (1-50): ", i + 1);
            scanf_s("%d", &palpite[i]);
        } while (palpite[i] < 1 || palpite[i] > 50);
    }
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4 - i; j++)
            if (chave[j] > chave[j + 1]) {
                int t = chave[j];
                chave[j] = chave[j + 1];
                chave[j + 1] = t;
            }
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (palpite[i] == chave[j]) { acertos++; break; }
    printf("\nAcertaste %d numero(s).\n", acertos);
    printf("Chave: ");
    for (int i = 0; i < 5; i++) printf("%d ", chave[i]);
    printf("\n");
    if (acertos == 5)
        printf("BRAVO, GANHASTE 1MILHAO DE BITCOIN\n");
    return 0;
}