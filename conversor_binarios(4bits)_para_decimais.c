#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c, d, x, y;
    scanf("%d",&x);
    if (x%2==0)
        a=0;
    else
        a=1;
    if ((x/10)%2==0)
        b=0;
    else
        b=2;
    if ((x/100)%2==0)
        c=0;
    else
        c=4;
    if ((x/1000)%2==0)
        d=0;
    else
        d=8;
    y=a+b+c+d;
    printf("%d", y);
}