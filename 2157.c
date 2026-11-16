#include <stdio.h>

int main()
{
    int testes, inicio, fim, tamanho, inicio_espelho, fim_espelho;
    int i, j, k, l;

    scanf("%d", &testes);

    for (i = 0; i < testes; i++) {
        scanf("%d", &inicio);
        scanf("%d", &fim);

        tamanho = fim - inicio + 1;

        inicio_espelho = fim;

        int vetor[tamanho];
        int vetor_espelho[tamanho];

        for (j = 0; j < tamanho; j++) {
            vetor[j] = inicio;
            vetor_espelho[j] = inicio_espelho;

            inicio++;
            inicio_espelho--;
        }

        for (k = 0; k < tamanho; k++) {
            printf("%d", vetor[k]);
        }

        for (k = 0; k < tamanho; k++) {

            if ((vetor_espelho[k] >= 10) && (vetor_espelho[k] < 100)) {
                printf("%d", vetor_espelho[k]%10); 
                printf("%d", vetor_espelho[k]/10);
            }
            else if ((vetor_espelho[k] >= 100) && (vetor_espelho[k] < 1000)) {
                printf("%d", (vetor_espelho[k]%100)%10);
                printf("%d", (vetor_espelho[k]%100)/10); 
                printf("%d", vetor_espelho[k]/100);
            }
            else if ((vetor_espelho[k] >= 1000) && (vetor_espelho[k] < 10000)) {
                printf("%d", ((vetor_espelho[k]%1000)%100)%10);
                printf("%d", ((vetor_espelho[k]%1000)%100)/10); 
                printf("%d", (vetor_espelho[k]%1000)/100);
                printf("%d", vetor_espelho[k]/1000);
            }
            else if (vetor_espelho[k] >= 10000) {
                printf("%d", (((vetor_espelho[k]%10000)%1000)%100)%10);
                printf("%d", (((vetor_espelho[k]%10000)%1000)%100)/10);
                printf("%d", ((vetor_espelho[k]%10000)%1000)/100); 
                printf("%d", (vetor_espelho[k]%10000)/1000);
                printf("%d", vetor_espelho[k]/10000);
            }
            else if (vetor_espelho[k] < 10)
                printf("%d", vetor_espelho[k]);
        }
        
        printf("\n");

    }

    return 0;
}