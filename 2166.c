#include <stdio.h>

double raizDeDois(double n);

int main ()
{
    double n, resultado;
    
    scanf("%lf",&n);
    
    resultado = raizDeDois(n) + 1;
    
    printf("%.10lf\n", resultado);
    
    return 0;
}

double raizDeDois(double n) 
{
    if (n == 0)
        return 0;
    else {
        return 1.0 / (2 + raizDeDois(n - 1));
    }
}