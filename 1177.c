#include <stdio.h>

int main(){
    int vetor[1000];
    int num, x=0;

    scanf("%d", &num);

    for(int i=0; i<1000; i++){
        vetor[i] = x;
        x++;

        if(x==num)
            x = 0;

        printf("N[%d] = %d\n", i, vetor[i]);   
    }

    return 0;
}