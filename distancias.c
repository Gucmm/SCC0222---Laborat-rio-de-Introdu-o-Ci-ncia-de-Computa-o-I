#include <stdio.h>
#include <math.h>
int main()
{
    float w, x, y, z, a, b;
    scanf("%f%f\n%f%f", &w, &x, &y, &z);
    a=sqrt(pow((w-y), 2)+ pow((x-z), 2));
    b=(fabs(w-y)+fabs(x-z));
    printf("Distancia euclidiana: %.3f\nDistancia Manhattan: %.3f\n", a, b);
    return 0;
}
