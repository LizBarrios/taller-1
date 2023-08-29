#include <stdio.h>

int main() 
{
    int calificaciones[10];
    int sum = 0, i=0, temp ;

    printf("Ingrese 10 calificaciones:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Calificacion %d: ", i + 1);
        scanf("%d", &calificaciones[i]);
        sum += calificaciones[i];
    }

    printf("\nCalificaciones ingresadas:\n");
    for (int i = 0; i < 10; i++) {
        printf("Calificacion %d: %d\n", i + 1, calificaciones[i]);
    }

    float promedio = (float)sum / 10;
    printf("\nPromedio: %.2f\n", promedio);

    for ( i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (calificaciones[j] > calificaciones[j + 1]) {
                temp = calificaciones[j];
                calificaciones[j] = calificaciones[j + 1];
                calificaciones[j + 1] = temp;
            }
        }
    }

    printf("\nCalificaciones ordenadas en orden ascendente:\n");
    for (int i = 0; i < 10; i++) {
        printf("Calificacion %d: %d\n", i + 1, calificaciones[i]);
    }

    return 0;
}
