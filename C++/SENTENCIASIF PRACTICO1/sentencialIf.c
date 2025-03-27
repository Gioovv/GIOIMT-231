#include <stdio.h>

int main(void) {
    int numberA = 0;
    int numberB = 0;
    
    printf("Ingrese primer numero: ");
    scanf("%d", &numberA);
    
    printf("Ingrese segundo numero: ");
    scanf("%d", &numberB);
    
    if (numberA > numberB) {
        printf("El numero mayor es %d\n", numberA);
    } 
    else if (numberB > numberA) {
        printf("El numero mayor es %d\n", numberB);
    }
    else {
        printf("Los numeros son iguales\n");
    }
    
    return 0;
}
