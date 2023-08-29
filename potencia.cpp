#include <stdio.h>
#include <math.h>
float calcularPotencia(float b, float e);
int main(void)
{
    float b,e,resultado;
    printf("ingrese la base a potenciar: ");
    scanf("%f",&b);
    printf("ingrese el exponente: ");
    scanf("%f",&e);
    resultado = calcularPotencia(b,e);
    printf("el resultado es: %f",resultado);
    return 0;
}
float calcularPotencia(float b, float e)
{
    float resultado;
    resultado = pow(b,e);
    return resultado;
}