#include <stdio.h>

int main(){
    double a, b, c, area_trapezio, perimetro_triangulo;
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a+b>c && a+c>b && b+c>a){
        perimetro_triangulo = a+b+c;
        printf("Perimetro = %.1lf\n", perimetro_triangulo);
    }
    else{
        area_trapezio = ((a+b) * c)/2;
        printf("Area = %.1lf\n", area_trapezio);
    }
    return 0;
}