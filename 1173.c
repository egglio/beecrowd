#include <stdio.h>

int main(){
    int vetor[10];
    int n;

    scanf("%d", &n);
    vetor[0] = n;
    printf("N[0] = %d\n", n);

    for(int i=1; i<10; i++){
        n = n*2;
        vetor[i] = n;
        printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}