#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () 
{
    int n, i, j;
    char texto[55];

    gets(texto);
    n = atoi(texto);

    for (i = 0; i <= n; i++) {
        fgets(texto, sizeof(texto), stdin);
        for (j = 0; j < strlen(texto); j++) {
            if (j > 0) {
                if (texto[j - 1] == ' ' && texto[j] > 96 && texto[j] < 123){
                    printf("%c",texto[j]);
                }
            }
            else if (j == 0 && texto[j] != ' '){
                printf("%c",texto[j]);
            }
        }
        
        printf("\n");
    }
    return 0;
}