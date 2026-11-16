#include <stdio.h>
#include <string.h>

int main() 
{
    char risada[100], vogais[100], vogais_contrario[100];
    int i, j, tamanho, cont;

    fgets(risada, sizeof(risada), stdin);

    j = 0;
    cont = 0;

    tamanho = strlen(risada) - 1;

    for (i = 0; i < tamanho; i++) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o'|| risada[i] == 'u') {
            vogais[j] = risada[i];
            cont++;
            j++;
        }
        vogais[j] = '\0';
    }

    j = 0;

    for (i = tamanho; i >= 0; i--) {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o'|| risada[i] == 'u') {
            vogais_contrario[j] = risada[i];
            j++;
        }
        vogais_contrario[j] = '\0';
    }

    if (strcmp(vogais, vogais_contrario) == 0 && cont != 0) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}