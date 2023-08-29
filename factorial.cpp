#include <stdio.h>

int main() {
    int i;
    float num, acu;
    
    printf("Ingrese un numero: ");
    scanf("%f", &num);
    
    acu = 1; 
    
    for (i = 1; i <= num; i++) {
        acu *= i; 
    }
    
    printf("El factorial de %.0f es %.0f\n", num, acu);
    
    return 0;
}
