#include <stdio.h>
#include <string.h>

int main()
{
    int cont, cont_consoante, n, i, j, tamanho;
    char sobrenome[50], ntext[10];

    fgets(ntext, sizeof(ntext), stdin);
    n = atoi(ntext);

    for (i = 0; i < n; i++) {
        gets(sobrenome);

        tamanho = strlen(sobrenome);
        cont_consoante = 0;
        cont = 0;

        for (j = 0; j < tamanho; j++) {
            if (sobrenome[j] != 'a' && sobrenome[j] != 'e' && sobrenome[j] != 'i' && sobrenome[j] != 'o' && sobrenome[j] != 'u' && sobrenome[j] != 'A' && sobrenome[j] != 'E' && sobrenome[j] != 'I' && sobrenome[j] != 'O' && sobrenome[j] != 'U') {
                cont++;
                if (cont > cont_consoante){
                    cont_consoante = cont;
                }
            }
            else {
                cont = 0;
            }
        }

        if (cont_consoante >= 3) {
            printf("%s nao eh facil\n", sobrenome);
        }
        else {
            printf("%s eh facil\n", sobrenome);
        }
    }

    return 0;
}