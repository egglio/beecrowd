#include <stdio.h>
#include <math.h>

int main(){
    int h, m, qtd_testes;
    double resultado, media, soma;

    while(scanf("%d %d", &h, &m) != EOF){
        media = 0;
        soma = 0;
        qtd_testes = (h*60)/m;
        double casos[qtd_testes];

        for(int idx=0; idx<qtd_testes; idx++){
            scanf("%lf", &casos[idx]);
        }
        for(int idx=0; idx<qtd_testes; idx++){
            media += casos[idx];
        }
        media = media/qtd_testes;
        for(int idx=0; idx<qtd_testes; idx++){
            soma += (casos[idx]-media)*(casos[idx]-media);
        }
        resultado = sqrt(soma/(qtd_testes-1));
        printf("%.5lf\n", resultado);
    }
    return 0;
}