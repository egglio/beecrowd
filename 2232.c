#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int pascal(int x) {
    if (x == 1) {
        return 1;
    } else {
        return pow(2, x);
    }
}

int main() {
    int trianglo;

    scanf("%d", &trianglo);

    for (int i = 0; i < trianglo; i++) {
        int n;

        scanf("%d", &n);

        if (n == 1) {
            printf("1\n");
        } else {
            printf("%d\n", abs(pascal(n)) - 1);
        }
    }
}
