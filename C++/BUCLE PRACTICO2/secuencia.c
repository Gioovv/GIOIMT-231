#include <stdio.h>

int main() {
    int N, i = 1;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("El numero debe ser positivo.\n");
        return 1;
    }

    printf("Secuencia del 1 al %d:\n", N);
    while (i <= N) {
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}
