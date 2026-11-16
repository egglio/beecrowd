#include <stdio.h>

int main(){
    double nota, nota1, nota2, media;
    int cont=0;

    do{
        scanf("%lf", &nota);
        if((nota >= 0)&&(nota <= 10)){
            cont += 1;
            if(cont == 1) nota1 = nota;
            if(cont == 2) nota2 = nota;
        }
        else if((nota < 0)||(nota > 10)) printf("nota invalida\n");
    }while(cont != 2);
    
    media = (nota1 + nota2)/2;
    printf("media = %.2lf\n", media);
    return 0;
}