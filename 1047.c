#include <stdio.h>

int main(){
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int horas, minutos;
    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    horas = hora_final - hora_inicial;
    minutos = minuto_final - minuto_inicial;

    if(minutos < 0){
        minutos += 60;
        horas -= 1;
    }
    if(horas == 0){
        if(minutos > 0) horas = 0;
        if(minutos == 0) horas = 24;
    }
    else if(horas < 0){
        horas += 24;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
    return 0;
}