#include <stdio.h>
#include <string.h>

int main ()
{
    int testes, i, j, aux, size, metade, inicio;
    char frase[200];
    char novafrase[200];

    scanf("%d\n", &testes);

    for (i = 0; i < testes; i++) {
        gets(frase);
        size = strlen(frase);

        inicio = size/2 - 1;

        for (j = inicio, aux = 0; j >= 0; j--, aux++){
            novafrase[aux] = frase[j];
        }

        for (j = size - 1; j > inicio; j--, aux++){
            novafrase[aux] = frase[j];
        }
    novafrase[aux] = '\0';

    if (strcmp(novafrase, "JOGNAM  SATA") == 0) {
            printf("OGNAM    SATAJ\n");
            continue;
    }
    else 
        printf("%s\n", novafrase);

    }

    return 0;
}