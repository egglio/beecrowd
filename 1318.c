#include <stdio.h>

int main() {
    int bilhetes[10001];
    int i, a, num_bilhetes, num_pessoas, cont;

    scanf("%d", &num_bilhetes);
    scanf("%d", &num_pessoas);

    while ((num_bilhetes != 0) && (num_pessoas != 0)) {
        cont = 0;

        for (i = 0; i <= 10001; i++) {
            bilhetes[i] = 0;
        }

        for (i = 0; i < num_pessoas; i++) {
            scanf("%d", &a);
            bilhetes[a] += 1;
        }

        for (i = 1; i <= num_bilhetes; i++) {
            if (bilhetes[i] > 1) cont++;
        }

        if (cont > 0) printf("%d\n", cont);

        scanf("%d", &num_bilhetes);
        scanf("%d", &num_pessoas);
    }

    return 0;
}