#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, c, d, f, x, y;
    scanf("%d%d",&x,&y);
    if(x>y)
        a=1;
    else
        a=0;
    if(x%2==0)
        b=1;
    else
        b=0;
    if(y%3==0)
        c=0;
    else
        c=1;
    if((x>y) && (x%2==0))
        d=1;
    else
        d=0;
    if((x>y) || (x%2)==0)
        f=1;
    else
        f=0;
    printf("A > B: %d\n", a);
    printf("A eh par: %d\n", b);
    printf("B NAO eh multiplo de 3: %d\n", c);
    printf("A > B e A eh par: %d\n", d);
    printf("A > B ou A eh par: %d\n", f);
}