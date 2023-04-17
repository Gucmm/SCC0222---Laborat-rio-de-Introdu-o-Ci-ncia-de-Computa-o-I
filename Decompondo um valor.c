#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c, d, e, f, g, x;
    scanf("%d",&x);
    a= x/100;
    b= (x-(100*a)) / 50;
    c=(x-(100*a)-(50*b)) / 20;
    d=(x-(100*a)-(50*b)-(20*c)) / 10;
    e=(x-(100*a)-(50*b)-(20*c)-(10*d)) / 5;
    f=(x-(100*a)-(50*b)-(20*c)-(10*d)-(5*e)) / 2;
    g=(x-(100*a)-(50*b)-(20*c)-(10*d)-(5*e)-(2*f)) / 1;
    printf("%d nota(s) de R$ 100\n", a);
    printf("%d nota(s) de R$ 50\n", b);
    printf("%d nota(s) de R$ 20\n", c);
    printf("%d nota(s) de R$ 10\n", d);
    printf("%d nota(s) de R$ 5\n", e);
    printf("%d nota(s) de R$ 2\n", f);
    printf("%d moeda(s) de R$ 1\n", g);
}