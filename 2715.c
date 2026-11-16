#include <stdio.h>
#include <stdlib.h>

long long absoluto(long long x)
{
    return (x < 0) ? -x : x;
}

int main() 
{
    long long int i, j, num, seq, dif, menor_dif = 100000, gugu, rangel;
    long long int trabalhos[1000000];

    while(scanf("%lld", &seq) != EOF){
        
        for (i = 0; i < seq; i++){
            scanf("%lld", &num);
            
            trabalhos[i] = num;
            gugu += trabalhos[i];
        }
        
        menor_dif = gugu;

        for (j = 0; j < seq; j++) {
            dif = absoluto(gugu - rangel);

            if (dif < menor_dif)
                menor_dif = dif;

            rangel += trabalhos[j];
            gugu -= trabalhos[j];
        }
        
        printf("%lld\n", menor_dif);

        gugu = 0;
        rangel = 0;
    }

    return 0;
}