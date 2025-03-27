#include <stdio.h>

int main() {
    int N;

    printf("Ingrese un número entero positivo: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("El número debe ser positivo.\n");
        return 1;
    }

    int suma = N * (N + 1) / 2;

    printf("La suma de los primeros %d números naturales es: %d\n", N, suma);

    return 0;
}
