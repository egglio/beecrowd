#include <stdio.h>
#include <string.h>

int main ()
{
    int testes, i, j, size, metade, inicio;
    char frase[101];

    gets(frase);
    testes = atoi(frase);

    for (i = 0; i < testes; i++) {
        gets(frase);
        size = strlen(frase);

        inicio = size/2 - 1;

        for (j = inicio; j >= 0; j--){
            printf("%c", frase[j]);
        }

        for (j = size-1; j > inicio; j--){
            printf("%c", frase[j]);
        }

        printf("\n");
    }

    return 0;
}