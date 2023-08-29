#include <stdio.h>

int main() 
{
    float num1, num2, resultado;
    char operador;

    printf("Ingrese el primer numero: ");
    scanf("%f", &num1);

    printf("Ingrese el operador (+, -, *, /): ");
    scanf(" %c", &operador);

    printf("Ingrese el segundo numero: ");
    scanf("%f", &num2);


    switch (operador) 
    {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                printf("Error: Division por cero no es posible.\n");
            }
            break;
        default:
            printf("Error: Operador no valido.\n");
    }

    printf("Resultado: %.2f\n", resultado);
    return 0;
}
