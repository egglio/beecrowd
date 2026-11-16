#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverse(char *s);
void myitoa(int n, char s[]);

int main ()
{
    int n, i, j, soma_par, soma_impar, descompactado;
    char digitos[1001], ntext[10], par[30], impar[30];

    gets(ntext);
    n = atoi(ntext);

    while (n != 0) {
        for (i = 0; i < n; i++) {
            gets(digitos);

            soma_impar = 0;
            soma_par = 0;
            descompactado = 0;

            for (j = 0; j < strlen(digitos); j++) {
                if (j % 2 == 0) {
                    soma_par += digitos[j] - '0';
                }
                else if (j % 2 != 0) {
                    soma_impar += digitos[j] - '0';
                }
            }

            myitoa (soma_par, par);
            myitoa (soma_impar, impar);

            for (j = 0; j < strlen(par); j++) {
                descompactado += par[j] - '0';
            }
            for (j = 0; j < strlen(impar); j++) {
                descompactado += impar[j] - '0';
            }

            printf("%d\n", descompactado);
        }

        gets(ntext);
        n = atoi(ntext);
    }
    return 0;
}

#include <string.h>

/* reverse: reverse a string s */
void reverse(char *s)
{
    char *j = s;
    char temp;

    for (j += strlen(s) - 1; s < j; s++, j--) {
        temp = *j;
        *j = *s;
        *s = temp;
    }
}

/* itoa: convert an integer n into a null-terminated array of characters */
void myitoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) > 0)
        n = -n;
    i = 0;
    do {
        s[i++] = -(n % 10) + '0';
    } while ((n /= 10) < 0);
    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}