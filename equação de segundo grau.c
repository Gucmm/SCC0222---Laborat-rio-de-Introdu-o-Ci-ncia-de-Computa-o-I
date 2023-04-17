#include <stdio.h>

int main()
{ 
    int a, b, c, x, y;
    scanf("%d%d%d%d",&a,&b,&c,&x);
    y=a*x*x+b*x+c;
    printf("%d", y);
    return 0;
}