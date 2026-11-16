#include <stdio.h>

int main () {
int n, idx, resultado = 0;
scanf("%d", &n);

for (idx = 1; idx <= 10; idx++){
    resultado = idx*n;
    printf("%d x %d = %d\n", idx, n, resultado);
}

return 0;
}