
#
#include <stdio.h>
#include "funciones.h"

int main(void) {
    int opcion;
    int numero;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Verificar si un numero es primo\n");
        printf("2. Calcular factorial de un numero\n");
        printf("3. Contar numeros pares e impares entre 1 y N\n");
        printf("4. Mostrar multiplos de 3 entre 1 y N\n");
        printf("5. Salir del programa\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion == 5) {
            printf("Gracias por usar mi programa uwu\n");
            break;
        }

        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese un numero positivo: ");
            scanf("%d", &numero);

            if (numero <= 0) {
                printf("El numero debe ser positivo\n");
                continue;
            }
        }

        switch (opcion) {
            case 1:
                if (esPrimo(numero)) {
                    printf("El numero %d es primo\n", numero);
                } else {
                    printf("El numero %d no es primo\n", numero);
                }
                break;
            case 2:
                printf("El factorial de %d es %d\n", numero, factorial(numero));
                break;
            case 3: {
                int pares, impares;
                contarParesImpares(numero, &pares, &impares);
                printf("Entre 1 y %d hay %d pares y %d impares\n", numero, pares, impares);
                break;
            }
            case 4:
                printf("Multiplos de 3 entre 1 y %d:\n", numero);
                mostrarMultiplosDe3(numero);
                break;
            default:
                printf("Opcion no valida\n");
        }
    }

    return 0;
}
