#include <stdio.h>

int escadinha(int *seq, int tam);

int main() 
{
    int i, tamanho_seq;

    scanf("%d", &tamanho_seq);

    int sequencia[tamanho_seq];

    for (i = 0; i < tamanho_seq; i++) {
        scanf("%d", &sequencia[i]);
    }

    printf("%d\n", escadinha(sequencia, tamanho_seq));


    return 0;
}

int escadinha(int *seq, int tam)
{
    int i, ant, atual, qtd_escadinha;

    if (tam == 1 || tam == 2)
        return 1;

    qtd_escadinha = 1;
    ant = seq[0] - seq[1];

    for (i = 2; i < tam; i++) {
        atual = seq[i - 1] - seq[i];

        if (atual != ant)
            ant = atual, qtd_escadinha++;
    }
    
    return qtd_escadinha;
}