#include <stdio.h>

int verificaPar(int n);
void printaVetor(int a[], int n);
void printaVetor2(int a[], int n, int j);
const int TAM = 5;

int main()
{
    int par[5], impar[5];
    int i, p, idx;
    int num;

    for (idx = 0, i = 0, p = 0; idx < 15; idx++){
        scanf("%d", &num);

        if (verificaPar(num)){
            par[p] = num;
            p++;

            if (p >= 5) {
                printaVetor(par, 1);
                p = 0;
            }
        } 
        else {
            impar[i] = num;
            i++;

            if (i >= 5) {
                printaVetor(impar, 0);
                i = 0;
            }
        }
    }
    printaVetor2 (impar, 0, i);
    printaVetor2 (par, 1, p);

    return 0;
}

int verificaPar(int n)
{
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

void printaVetor(int a[], int n)
{
    for (int idx = 0; idx < TAM; idx++){
        printf("%s[%d] = %d\n", n ? "par" : "impar", idx, a[idx]);
    }
}

void printaVetor2(int a[], int n, int j)
{
    for (int idx = 0; idx < j; idx++){
        printf("%s[%d] = %d\n", n ? "par" : "impar", idx, a[idx]);
    }
}