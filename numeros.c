#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int main() {
    int num1, num2, suma = 0;
    struct timeval inicio, fin;

    // Ingreso de dos números desde el usuario
    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    // Registro del tiempo de inicio de la ejecución
    gettimeofday(&inicio, NULL);

    // Suma consecutiva de los números entre num1 y num2
    for (int i = num1; i <= num2; i++) {
        suma += i; // Acumulación de la suma de los números
    }

    // Registro del tiempo de finalización de la ejecución
    gettimeofday(&fin, NULL);

    // Cálculo del tiempo de ejecución en milisegundos
    long tiempoEjecucion = (fin.tv_sec - inicio.tv_sec) * 1000L + (fin.tv_usec - inicio.tv_usec) / 1000;

    // Mostrar la suma y el tiempo de ejecución
    printf("La suma de los numeros entre %d y %d es: %d\n", num1, num2, suma);
    printf("Tiempo de ejecución: %ld milisegundos\n", tiempoEjecucion);

    return 0;
}
