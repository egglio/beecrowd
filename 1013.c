#include <stdio.h>

int modulo(int x);

int main() {
    int a, b, c, maior1, maior2;
    scanf("%d %d %d", &a, &b, &c);
    maior1 = (a + b + modulo(a - b))/2;
    maior2 = (maior1 + c + modulo(maior1 - c))/2;
    printf("%d eh o maior\n", maior2);
    return 0;
}

int modulo(int x) {
    if (x < 0) {
        x = -x;
    }
    return x;
}