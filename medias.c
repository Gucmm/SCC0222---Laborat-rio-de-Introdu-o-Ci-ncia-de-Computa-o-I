#include <stdio.h>
#include <math.h>
int main()
{
    float x, y, z, a, b, c;
    scanf("%f%f%f", &x, &y, &z);
    a=(x+y+z)/3;
    b=3/((1/x)+(1/y)+(1/z));
    c=pow((x*y*z), (1.0/3.0));
    printf("Media aritimetica: %.4f\nMedia harmonica: %.4f\nMedia geometrica: %.4f\n", a, b, c);
    return 0;
}