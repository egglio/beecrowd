#include <stdio.h>

int main ()
{
    char letra;
    int c1, c2, n, i;
    
    scanf("%d",&n);
    
    for (i = 0; i < n; i++) {
        scanf("%d %c %d", &c1, &letra, &c2);
        
        if (c1 == c2) {
            printf("%d\n", c1 * c2);
        }
        else if (letra >= 'a' && letra <= 'z') {
            printf("%d\n", c1 + c2);
        }
        else if(letra >= 'A' && letra <= 'Z') {
            printf("%d\n", c2 - c1);
        }
    }
    return 0;
}