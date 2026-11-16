#include <stdio.h>
#include <string.h>

int main ()
{
    int n, p, i, j, flag = 1;
    char string[100][21], aux[21], ntext[5], ptext[5];

   gets(ntext);
   n = atoi(ntext);

    while (n > 0) {
        gets(ptext);
        p = atoi(ptext);

        for (j = 0; j < p; j++) {
            gets(string[j]);
        }

        strcpy(aux, string[0]);

        for(i = 0; i < p; i++) {
            if (strcmp(string[i], aux) != 0) {
                flag = 0;
            }
        }

        if (flag == 0) {
            printf("ingles\n");
        }
        else {
            printf("%s\n", aux);
        }

        for (i = 0; i < 100; i++) {
            for (j = 0; j < 21; j++) {
                string[i][j] = 0;
            }
        }

        flag = 1;
        n--;
    }

    return 0;
}