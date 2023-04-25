#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2, d;
    scanf("%d%d%d", &a, &b, &c);
    d=(b*b)-(4*a*c);
    if(d>=0)
        {
        x1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
        x2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
        if(x1==x2)
            printf("%.3f", x1);
        else
            {
            if (x1<x2)
                printf("%.3f %.3f", x1, x2);
            else 
                printf("%.3f %.3f", x2, x1);
            }
        }
    else
        printf("NAO EXISTE RAIZ REAL");
    return 0;
}
