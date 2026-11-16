#include <stdio.h>

int main(){
    int n, x=1, y=1, z=1, idx;

    scanf("%d", &n);
    printf("%d %d %d\n", x, y, z);

    y = 2;
    z = 2;

    printf("%d %d %d\n", x, y, z);

    for(idx=2; idx<(n*2); idx++){
        if(idx%2 == 0){
            x += 1;
            y = x*x;
            z = x*x*x;
        }
        else if(idx%2 != 0){
            y = (x*x)+1;
            z = (x*x*x)+1;
        }
        printf("%d %d %d\n", x, y, z);
    }

    return 0;
}