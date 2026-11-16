#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// nirva qui fez

int main()
{
    int n;
    char ntext[3];
    char stringarray[50][51];
    int firstanswer = 1;

    gets(ntext);
    n = atoi(ntext);
    while (n) {
        if (!firstanswer) {
            putchar('\n');
        } else {
            firstanswer = 0;
        }
        int i, aux, biggest;
        for (i = 0, biggest = 0; i < n; i++) {
            gets(stringarray[i]);
            aux = strlen(stringarray[i]);
            if (aux > biggest)
                biggest = aux;
            /* printf("%d %d\n", aux, biggest); */
        }

        for (i = 0; i < n; i++) {
            int j;
            aux = strlen(stringarray[i]);
            aux = biggest - aux;
            for (j = 0; j < aux; j++) {
                putchar(' ');
            }
            printf("%s\n", stringarray[i]);
        }
        gets(ntext);
        n = atoi(ntext);
    }
    return 0;
}