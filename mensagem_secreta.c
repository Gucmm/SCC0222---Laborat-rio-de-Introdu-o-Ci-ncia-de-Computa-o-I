#include <stdio.h>
#include <math.h>
int main()
{
    int x, a, b, c, d;
    scanf("%d", &x);
    a= x&255;
    b= (x>>8)&255;
    c= (x>>16)&255;
    d= (x>>24)&255;
    printf("%c%c%c%c", d, c, b, a);
}