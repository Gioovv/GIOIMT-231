
#include <stdio.h>
#include "funciones.h"

int esPrimo(int n) {
    if (n <= 1) return 0;
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

int factorial(int n) {
    int f = 1;
    int i = 1;
    while (i <= n) {
        f = f * i;
        i++;
    }
    return f;
}

void contarParesImpares(int n, int *pares, int *impares) {
    int i = 1;
    *pares = 0;
    *impares = 0;
    while (i <= n) {
        if (i % 2 == 0) {
            (*pares)++;
        } else {
            (*impares)++;
        }
        i++;
    }
}

void mostrarMultiplosDe3(int n) {
    int i = 1;
    while (i <= n) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
}
