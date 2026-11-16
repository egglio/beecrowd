#include <stdio.h>

int minimodivisorcomum(int x, int y);

int main()
{
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        int fig1, fig2;
        
        scanf("%d %d", &fig1, &fig2);
        printf("%d\n", minimodivisorcomum(fig1, fig2));
    }

    return 0;
}

int minimodivisorcomum(int x, int y)
{
    if (y == 0) {
        return x;
    }
    else {
        return minimodivisorcomum(y, x % y);
    }
}