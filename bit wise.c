#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, a, b, c, d, e, f;
    scanf("%d%d", &x, &y);
    a= x&y;
    b= x|y;
    c= x^y;
    d= ~ x;
    e= x>>2;
    f= y<<1;
    printf("A and B: %d\nA or B: %d\nA xor B: %d\nnot A: %d\nA right shift 2: %d\nB left shift 1: %d\n", a, b, c, d, e, f);
}