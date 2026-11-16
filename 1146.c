#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);

    while(x != 0){
        for(int idx=1; idx<x; idx++){
            printf("%d ", idx);
        }
        printf("%d\n", x);
        scanf("%d", &x);
    }
    return 0;
}