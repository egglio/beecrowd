#include <stdio.h>

typedef struct {
    char carne[25];
    int val;

} meat;

void ordem(meat*, int tamanho);

int main() {
    int qtdcarnes, i;

    while (scanf("%d", &qtdcarnes) != EOF) {
        meat churras[qtdcarnes];

        for (i = 0; i < qtdcarnes; i++)
            scanf("%s %d", churras[i].carne, &churras[i].val);

        ordem(churras, qtdcarnes);

        for (i = 0; i < qtdcarnes; i++) {
            if (i != 0 && i != qtdcarnes) printf(" ");

            printf("%s", churras[i].carne);
        }
        printf("\n");
    }

    return 0;
}

void ordem(meat* churras, int tam) {
    short i = 1, j;
    meat p;

    while (i < tam) {
        j = i - 1;
        p = churras[i];

        while (j >= 0 && churras[j].val > p.val) {
            churras[j + 1] = churras[j];
            j--;
        }

        churras[j + 1] = p;
        i++;
    }
}