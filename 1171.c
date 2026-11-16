#include <stdio.h>

int main ()
{
    int n, i, cont, num;
    int numeros[2001] = {0};

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);
        numeros[num]++;
    }

    for (cont = 0; cont < 2001; cont++) {
        if (numeros[cont] > 0) {
            printf("%d aparece %d vez(es)\n", cont, numeros[cont]);
        }
    }


    return 0;
}