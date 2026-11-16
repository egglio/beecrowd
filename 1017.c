#include <stdio.h>

int main() {
    int tempo, velocidade, distancia;
    double litros;
    scanf("%d %d", &tempo, &velocidade);
    distancia = tempo * velocidade;
    litros = distancia/12.0;
    printf("%.3lf\n", litros);
    return 0;
}