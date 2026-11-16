#include <stdio.h>

int main(){
    int vitorias_cormengo, empates_cormengo, gols_cormengo;
    int vitorias_flaminthians, empates_flaminthians, gols_flaminthians;
    int pontos_cormengo, pontos_flaminthians;
    scanf("%d %d %d %d %d %d", &vitorias_cormengo, &empates_cormengo, &gols_cormengo, &vitorias_flaminthians, &empates_flaminthians, &gols_flaminthians);

    pontos_cormengo = 3 * vitorias_cormengo + empates_cormengo;
    pontos_flaminthians = 3 * vitorias_flaminthians + empates_flaminthians;

    if(pontos_cormengo > pontos_flaminthians) printf("C\n");
    else if(pontos_flaminthians > pontos_cormengo) printf("F\n");
    else if(pontos_cormengo == pontos_flaminthians){
        if(gols_cormengo > gols_flaminthians) printf("C\n");
        else if(gols_flaminthians > gols_cormengo) printf("F\n");
        else if(gols_cormengo == gols_flaminthians) printf("=\n");
    }
    return 0;
}