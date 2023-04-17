#include <stdio.h>
#include <math.h>

int main()

{
    int numero;
    double potencia;
    float raiz;
    scanf("%d", &numero);
    potencia= pow(numero, 10);
    raiz=sqrt(numero);
    printf("Numero: %d\n         %.2e\n         %.2f", numero, potencia, raiz);
}