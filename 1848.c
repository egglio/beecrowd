#include <string.h>
#include <stdio.h>

int main ()
{
    int cawcont = 0, soma = 0;
    char corvo[15], aux[] = "caw caw\n";

    while (cawcont != 3) {

        fgets(corvo, sizeof(corvo), stdin);

        while (strcmp(corvo, aux) != 0) {
            if (corvo[0] == '*') {
                soma += 4;
            }
            if (corvo[1] == '*') {
                soma += 2;
            }
            if (corvo[2] == '*') {
                soma += 1;
            }

            fgets(corvo, sizeof(corvo), stdin);
        }

        printf("%d\n", soma);
        
        cawcont += 1;
        soma = 0;
    }
    return 0;
}
