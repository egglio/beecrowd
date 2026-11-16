#include <stdio.h>
#include <string.h>

int main ()
{
    int n, i, j, cont, tamanho, letra;
    int alfabeto[26];
    char ntext[5], frase[1500];

    gets(ntext);
    n = atoi(ntext);

    for (i = 0; i < n; i++) {
        fgets(frase, sizeof(frase), stdin);

        tamanho = strlen(frase) - 1;
        cont = 0;

        for (j = 0; j < 26; j++) {
            alfabeto[j] = 0;
        }

        for (j = 0; j < tamanho; j++) {
            if (frase[j] >= 'a' && frase[j] <= 'z');
                letra = frase[j];
                if (alfabeto[letra - 'a'] != 1) {
                    alfabeto[letra - 'a'] = 1;
                }
        }

        for (j = 0; j < 26; j++) {
            if (alfabeto[j] == 1)
                cont += 1;
        }

        if (cont == 26) {
            printf("frase completa\n");
        }
        else if (cont >= 13 && cont < 26) {
            printf("frase quase completa\n");
        }
        else if (cont < 13) {
            printf("frase mal elaborada\n");
        }
    }
    
    return 0;
}