#include <stdio.h>

int main() {
    int numero;

    printf("Ingrese un numero entero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El numero %d es positivo.\n", numero);
    } else if (numero < 0) {
        printf("El numero %d es negativo.\n", numero);
    } else {
        printf("El numero es cero.\n");
    } 
    return 0;
}
