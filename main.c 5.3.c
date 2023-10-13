#include <stdio.h>

int main(void) {
    int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
    int *IX;

    printf("Valores iniciales:\n");
    printf("X = %d, Y = %d, Z[0] = %d, Z[1] = %d, Z[2] = %d, Z[3] = %d, Z[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    // Asignación de valores a través de punteros
    IX = &X;
    Y = *IX;
    *IX = 1;

    printf("\nDespués de modificar X:\n");
    printf("X = %d, Y = %d, Z[0] = %d, Z[1] = %d, Z[2] = %d, Z[3] = %d, Z[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = &Z[2];
    Y = *IX;
    *IX = 15;

    printf("\nDespués de modificar Z[2]:\n");
    printf("X = %d, Y = %d, Z[0] = %d, Z[1] = %d, Z[2] = %d, Z[3] = %d, Z[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    X = *IX + 5;
    *IX = *IX - 5;

    printf("\nDespués de modificar X y Z[2]:\n");
    printf("X = %d, Y = %d, Z[0] = %d, Z[1] = %d, Z[2] = %d, Z[3] = %d, Z[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    ++*IX;
    *IX += 1;

    printf("\nDespués de modificar Z[2] dos veces:\n");
    printf("X = %d, Y = %d, Z[0] = %d, Z[1] = %d, Z[2] = %d, Z[3] = %d, Z[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    // Acceso a elementos a través de punteros
    IX = &X;
    X = *(IX + 1);
    Y = *IX;

    printf("\nDespués de modificar X y Y a través de punteros:\n");
    printf("X = %d, Y = %d, Z[0] = %d, Z[1] = %d, Z[2] = %d, Z[3] = %d, Z[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    IX = IX + 1;
    Y = *IX;

    printf("\nDespués de modificar IX y Y a través de punteros:\n");
    printf("X = %d, Y = %d, Z[0] = %d, Z[1] = %d, Z[2] = %d, Z[3] = %d, Z[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    // Intento de acceso a una dirección fuera del arreglo
    IX = IX + 4;
    Y = *IX;

    printf("\nDespués de intentar acceder a una dirección fuera del arreglo:\n");
    printf("X = %d, Y = %d, Z[0] = %d, Z[1] = %d, Z[2] = %d, Z[3] = %d, Z[4] = %d\n", X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);

    return 0;
}

