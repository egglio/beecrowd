#include <stdio.h>
#include <limits.h>

#define MAX_X 1000

int main() {
    int x;

    while (scanf("%d", &x) != EOF) {
        int e1, e2;
        scanf("%d %d", &e1, &e2);

        int tempo1[MAX_X], tempo2[MAX_X];
        int trans1[MAX_X - 1], trans2[MAX_X - 1];
        int x1, x2;

        for (int i = 0; i < x; i++) {
            scanf("%d", &tempo1[i]);
        }

        for (int i = 0; i < x; i++) {
            scanf("%d", &tempo2[i]);
        }

        for (int i = 0; i < x - 1; i++) {
            scanf("%d", &trans1[i]);
        }

        for (int i = 0; i < x - 1; i++) {
            scanf("%d", &trans2[i]);
        }

        scanf("%d %d", &x1, &x2);

        int vetor1[MAX_X], vetor2[MAX_X];

        vetor1[0] = e1 + tempo1[0];
        vetor2[0] = e2 + tempo2[0];

        for (int i = 1; i < x; i++) {
            vetor1[i] = (vetor1[i - 1] + tempo1[i] < vetor2[i - 1] + trans2[i - 1] + tempo1[i])
                ? (vetor1[i - 1] + tempo1[i]) : (vetor2[i - 1] + trans2[i - 1] + tempo1[i]);

            vetor2[i] = (vetor2[i - 1] + tempo2[i] < vetor1[i - 1] + trans1[i - 1] + tempo2[i])
                ? (vetor2[i - 1] + tempo2[i]) : (vetor1[i - 1] + trans1[i - 1] + tempo2[i]);
        }

        int result = (vetor1[x - 1] + x1 < vetor2[x - 1] + x2)
            ? (vetor1[x - 1] + x1) : (vetor2[x - 1] + x2);

        printf("%d\n", result);
    }

    return 0;
}