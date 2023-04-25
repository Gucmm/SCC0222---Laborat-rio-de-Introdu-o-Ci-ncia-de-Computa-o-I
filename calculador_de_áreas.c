/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char x;
    float a, b, y;
    scanf("%c", &x);
    switch(x){
        case 'q': 
            scanf("%f", &a); 
            y=a*a;
            printf("%.2f", y); 
            break;
        
        case 'r':
            scanf("%f%f", &a, &b);
            y=a*b;
            printf("%.2f", y); 
            break;
        
        case 't': 
            scanf("%f%f", &a, &b); 
            y=(a*b)/2;
            printf("%.2f", y); 
            break;
        
        case 'c':
            scanf("%f", &a);
            y=3.14*a*a;
            printf("%.2f", y); 
            break;
        }
    return 0;
}
