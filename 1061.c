#include <stdio.h>
#include <stdlib.h>

int main(){
    int dia_inicio, dia_termino;
    int horas_inicio, minutos_inicio, segundos_inicio;
    int horas_termino, minutos_termino, segundos_termino;
    int tempo_total, inicio, termino, tempo;
    int dias, horas, minutos, segundos;

    scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d", &dia_inicio, &horas_inicio, &minutos_inicio, &segundos_inicio, &dia_termino, &horas_termino, &minutos_termino, &segundos_termino);

    inicio = dia_inicio * (24*60*60) + horas_inicio * (60*60) + minutos_inicio * 60 + segundos_inicio;
    termino = dia_termino * (24*60*60) + horas_termino * (60*60) + minutos_termino * 60 + segundos_termino;
    tempo = termino - inicio;
    tempo_total = abs(tempo);

    dias = tempo_total/(24*60*60);
    horas = tempo_total%(24*60*60)/(60*60);
    minutos = tempo_total%(24*60*60)%(60*60)/60;
    segundos = tempo_total%(24*60*60)%(60*60)%(60);

    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);

    return 0;
}