#include <stdio.h>

int fatorial (int num);

int main ()
{
    int n;

    scanf("%d", &n);

    printf("%d\n", fatorial(n));
    
    return 0;
}

int fatorial (int num)
{
    if (num == 0) {
        return 1;
    }
    else {
        return num * fatorial(num - 1);
    }
}