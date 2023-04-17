
#include <stdio.h>

int main()
{
   int x;
   char y;
   
   scanf("%d %c", &x, &y);
   
   printf("Inteiro lido: %d\n", x);
   printf("Codigo hexadecimal: %x\n", x);
   printf("Caractere ASCII: %c\n\n", x);
   
   printf("Inteiro lido: %d\n", y);
   printf("Codigo hexadecimal: %x\n", y);
   printf("Caractere ASCII: %c\n", y);
   
    return 0;
}