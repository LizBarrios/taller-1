#include <stdio.h>

int esPrimo(int num);

int main() {
    int num = 2;
    int primosEncontrados = 0;

    printf("Los primeros 5 numeros primos son:\n");

    while (primosEncontrados < 5) {
        if (esPrimo(num)) {
            printf("%d ", num);
            primosEncontrados++;
        }
        num++;
    }

    return 0;
}

int esPrimo(int num) {
    if (num <= 1) {
        return 0; 
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1; 
}
