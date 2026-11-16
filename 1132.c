#include <stdio.h>

int main(){
    int x, y, idx, soma=0, temp;
    scanf("%d %d", &x, &y);

    if(x>y){
        temp = x;
        x = y;
        y = temp;
    }

    for(idx=x; idx<=y; idx++){
        if(idx%13 != 0) soma += idx;
    }
    printf("%d\n", soma);

    return 0;
}