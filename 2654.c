#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[101];
    int poder;
    int matadas;
    int mortes;
} godofwar;

int comp (godofwar *a, godofwar *b)
{
    if (a->poder == b-> poder) {
        if (a->matadas == b->matadas) {
            if (a->mortes == b->mortes) {
                return strcmp(a->nome, b->nome);
            } 
            else if (a->mortes < b->mortes) {
                return -1;
            } 
            else {
                return 1;
            }
        } 
        else if (a->matadas < b->matadas) {
            return 1; 
        } 
        else {
            return -1;
        }
    } else if (a->poder < b->poder) {
        return 1;
    }

    return -1;
}

int main ()
{
    int n;

    scanf("%d", &n);

    godofwar cand[n];

    for (int i = 0 ; i < n ; i++) { 
        scanf("%s %d %d %d", cand[i].nome, &cand[i].poder, &cand[i].matadas, &cand[i].mortes);
    }

    qsort(cand, n, sizeof(godofwar), comp);

    printf("%s\n", cand[0].nome);

    return 0;
}