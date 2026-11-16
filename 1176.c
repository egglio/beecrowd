#include <stdio.h>

int main() 
{
    unsigned long long int vetor[60];
    unsigned long long int x = 0, y = 1, z;
    int n, m;

    scanf("%d", &n);

    vetor[0] = x;
    vetor[1] = y;

    for (int i = 2; i <= 60; i++) {
        z = x + y;
        vetor[i] = z;

        x = y;
        y = z;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &m);
        printf("Fib(%d) = %llu\n", m, vetor[m]);
    }

    return 0;
}