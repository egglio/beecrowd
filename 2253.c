#include <stdio.h>
#include <string.h>

int main ()
{
    int contMaiuscula = 0, contMinuscula = 0, contNum = 0, charInvalido = 0, tamanho;
    int i;
    char senha[1000];

    fgets(senha, sizeof(senha), stdin);

    while (!feof(stdin)) {

        tamanho = strlen(senha) - 1;

        if (tamanho < 6 || tamanho > 32) {
            printf("Senha invalida.\n");
        }
        else {
            for (i = 0; i < tamanho; i++) {
                if (senha[i] >= 'A' && senha [i] <= 'Z') {
                    contMaiuscula += 1;
                }
                else if (senha[i] >= 'a' && senha [i] <= 'z') {
                    contMinuscula += 1;
                }
                else if (senha[i] >= '0' && senha[i] <= '9') {
                    contNum += 1;
                }
                else {
                    charInvalido += 1;
                }
            }

            if (contMaiuscula > 0 && contMinuscula > 0 && contNum > 0 && charInvalido == 0) {
                printf("Senha valida.\n");
            }
            else {
                printf("Senha invalida.\n");
            }
        }
        
        fgets(senha, sizeof(senha), stdin);

        contMaiuscula = 0;
        contMinuscula = 0;
        contNum = 0;
        charInvalido = 0;
    }
    printf("Senha valida.\n");

    return 0;
}