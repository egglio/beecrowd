#include <stdio.h>

double raizDeDez(double n);

int main ()
{
    double n, resultado;
    
    scanf("%lf",&n);
    
    resultado = raizDeDez(n) + 3;
    
    printf("%.10lf\n", resultado);
    
    return 0;
}

double raizDeDez(double n) 
{
    if (n == 0)
        return 0;
    else {
        return 1.0 / (6 + raizDeDez(n - 1));
    }
}