#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct {
    char letra;
    int freq;
} caractere;

int main(){
    int n, tamanho;
    char string[201];

    scanf("%d", &n);
    getchar();

    for(int i = 0 ; i < n ; i++){
        fgets(string, 201, stdin);

        caractere letras[26];

        for (int j = 0 ; j < 26 ; j++) {
            letras[j].letra = 'a' + j;
            letras[j].freq = 0;
        }

        tamanho = strlen(string);

        for (int j = 0 ; j < tamanho ; j++) {
            string[j] = tolower(string[j]);
        }

        qsort(string, tamanho, sizeof(char), strcmp);

        for (int j = 0 ; j < tamanho ; j++) {
            if(isalpha(string[j])){
                letras[(string[j]) - 'a'].freq++;
            }
        }

        for (int j = 0 ; j < 26 ; j++) {
            for (int k = j + 1 ; k < 26 ; k++) {
                if (letras[j].freq < letras[k].freq) {
                    caractere aux = letras[j];
                    letras[j] = letras[k];
                    letras[k] = aux;
                }
            }
        }

        int maior = 0;

        for (int j = 0 ; j < 26 ; j++) {
            if (letras[j].freq > maior) 
                maior = letras[j].freq;
        }

        for (int j = 0 ; j < 26 ; j++) {
            if (letras[j].freq == maior)
                printf("%c", letras[j].letra);
        }
        printf("\n");
    }

    return 0;
}