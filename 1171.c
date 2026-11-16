#include <stdio.h>

int main() {
    int quant[2001];
    int i, n, num;

    scanf("%d", &n);

    for (i = 0; i < 2001; i++) {
        quant[i] = 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        quant[num] += 1;
    }

    for (i = 0; i < 2001; i++) {
        if (quant[i] > 0) printf("%d aparece %d vez(es)\n", i, quant[i]);
    }
    return 0;
}