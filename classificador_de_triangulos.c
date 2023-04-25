/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if((a<b+c)&&(b<c+a)&&(c<a+b)==1)
        {
        if((a==b)&&(b==c)==1)
            printf("EQUILATERO");
        else
            if((a==b)||(b==c)||(c==a)==1)
                printf("ISOSCELES");
            else
                printf("ESCALENO");
        }
    else
        printf("INVALIDO");
    return 0;
}
