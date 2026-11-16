#include <stdio.h>

int main(){
    double valor, vetor[100];

    scanf("%lf", &valor);

    vetor[0] = valor;
    printf("N[0] = %.4lf\n", valor);

    for(int i=1; i<100; i++){
        valor = valor/2.0;
        vetor[i] = valor;

        printf("N[%d] = %.4lf\n", i, vetor[i]);
    }

    return 0;
}