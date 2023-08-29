#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); 
    int aleatorio = rand() % 100 + 1; 
    int intento, intReali = 0;
    
    printf("Bienvenido al juego de adivinar el número entre 1 y 100.\n");

    do {
        printf("Intento %d: Ingrese un número: ", intReali + 1);
        scanf("%d", &intento);
        
        if (intento < aleatorio) {
            printf("Demasiado bajo.\n");
        } else if (intento > aleatorio) {
            printf("Demasiado alto.\n");
        }
        intReali++;
    } while (intento != aleatorio);

    printf("¡Felicidades! Adivinaste el número %d en %d intentos.\n", aleatorio, intReali);

    return 0;
}
