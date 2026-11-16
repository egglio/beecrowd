#include <stdio.h>
 
int main(){
    
    double valor;
    int idx, cont = 0;
    
    for(idx=0; idx<6; idx++){
        scanf("%lf", &valor);
        if(valor>0) cont++;
    }
    printf("%d valores positivos\n", cont);

    return 0;
}