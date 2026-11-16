#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, j, x, maiortamanho, auxtamanho;
    int flagprimeira = 1;
    char palavra[50][51], aux[50], maior[50];

    scanf("%d", &n);

    while (n != 0) {

        if (!flagprimeira) {
            printf("\n");
        }
        else {
            flagprimeira = 0;
        }
        
        auxtamanho = 0;

        for (i = 0; i < n; i++) {
            scanf("%s", palavra[i]);
        
            if (strlen(palavra[i]) > auxtamanho) {
                strcpy(maior, palavra[i]);
                maiortamanho = strlen(maior);
            }

            auxtamanho = strlen(palavra[i]);
        }

        for (i = 0; i < n; i++) {
            if (palavra[i] != maior) {
                x = maiortamanho - strlen(palavra[i]);
                for (j = 0; j < x; j++) {
                    printf(" ");
                }
            }
            printf("%s\n", palavra[i]);
        }
        scanf("%d", &n);
    }

    return 0;
}