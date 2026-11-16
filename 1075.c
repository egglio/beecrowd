#include <stdio.h>

int main(){
    int n, idx;
    scanf("%d", &n);
    
    for (idx=1; idx<=10000; idx++){
        if(idx % n == 2) printf("%d\n", idx);
    }
    
    return 0;
}