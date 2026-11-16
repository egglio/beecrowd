#include <stdio.h>

int main(){
    int n, idx, cont=1, valor, temp, valor_ant=0, maior_sequencia=1;
    scanf("%d", &n);

    for(idx=0;idx<n;idx++){
        valor_ant = valor;
        scanf("%d", &valor);

        if(valor == valor_ant){
            cont += 1;
            if(cont > maior_sequencia) maior_sequencia = cont;
        }
        else if(valor != valor_ant) cont=1;
    }

    printf("%d\n", maior_sequencia);
    return 0;
}