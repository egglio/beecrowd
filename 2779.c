#include <stdio.h>

int main() 
{
    int total, faltam = 0, compradas, num, i;
    int compradas_count[101];

    scanf("%d", &total);
    scanf("%d", &compradas);

    for (i = 0; i < 101; i++) {
        compradas_count[i] = 0;
    }

    for (i = 0; i < compradas; i++) {
        scanf("%d", &num);
        compradas_count[num] += 1;
    }

    for (i = 1; i <= total; i++) {
        if (compradas_count[i] == 0){
            faltam++;
        }
    }

    printf("%d\n", faltam);

    return 0;
}