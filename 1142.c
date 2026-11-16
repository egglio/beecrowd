#include <stdio.h>

int main(){
    int n, x=1, y=2, z=3, idx;
    scanf("%d", &n);
    
    printf("%d %d %d PUM\n", x, y, z);
    for(idx=1; idx<n; idx++){
        x += 4;
        y += 4;
        z += 4;
        printf("%d %d %d PUM\n", x, y, z);
    }

    return 0;
}