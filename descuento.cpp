#include<stdio.h>
#define TASA_DESCUENTO 0.1
int main()
{
    float des,semiresul,resul;
    int prod=500;
    //descuento
    semiresul=prod*TASA_DESCUENTO;
    resul=prod-semiresul;
	printf("El precio final es: %f" ,resul);
    return 0;
}
