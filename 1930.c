#include <stdio.h>

int main() {
    int t1, t2, t3, t4, tmax;
    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    tmax = t1 + t2 + t3 + t4 - 3;
    printf("%d\n", tmax);
    return 0;
}