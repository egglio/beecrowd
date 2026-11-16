#include <stdio.h>

// funciona mas beecrowd nao aceita

unsigned long int fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n > 1) return fib(n - 1) + fib(n - 2);
}

int main() {
    int testes, n;
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++) {
        scanf("%d", &n);
        printf("Fib(%d) = %lu\n", n, fib(n));
    }
    return 0;
}