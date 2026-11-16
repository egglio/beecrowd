#include <stdio.h>

int preda(int n, int *maisgrande){
    if(n > *maisgrande){
        *maisgrande = n;
    }

    if(n == 1){
        return 1;
    }
    else if (n % 2 == 0) {
        return 1 + preda(n/2, maisgrande);
    }
    else {
        return 1 + preda(3*n + 1, maisgrande);
    }
}

int main()
{
    int aga, maisgrande;

    while (scanf("%d", &aga) && aga != 0) {
        maisgrande = 0;

        preda(aga, &maisgrande);

        printf("%d\n", maisgrande);
    }

    return 0;
}