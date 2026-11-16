#include <stdio.h>
 
int main(){
    
    int valor;
    int idx, cont_par = 0, cont_impar = 0, cont_positivo = 0, cont_negativo = 0;
    
    for(idx=0; idx<5; idx++){
        scanf("%d", &valor);
        if(valor % 2 == 0) cont_par++;
        if(valor % 2 != 0) cont_impar++;
        if(valor>0) cont_positivo++;
        if(valor<0) cont_negativo++;
    }

    printf("%d valor(es) par(es)\n", cont_par);
    printf("%d valor(es) impar(es)\n", cont_impar);
    printf("%d valor(es) positivo(s)\n", cont_positivo);
    printf("%d valor(es) negativo(s)\n", cont_negativo);

    return 0;
}