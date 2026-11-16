#include <stdio.h>

unsigned long int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n > 1) return fib(n - 1) + fib(n - 2);
}

int main() 
{
    int num, i;
    scanf("%d", &num);

    for (i = 0; i < num; i++) {
        if (i == num - 1)
            printf("%d\n", fib(i));
        else
            printf("%d ", fib(i));
    }

    return 0;
}