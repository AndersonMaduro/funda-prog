#include <stdio.h>

int main(void) {
    int ELE[5] = {0}; // Declaración del arreglo entero ELE de cinco elementos. Todos los elementos se inicializan en 0.
    int VOT, I;

    printf("Ingresa el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);

    while (VOT) {
        if (VOT > 0 && VOT < 6) {
            ELE[VOT - 1]++; // Los votos se almacenan en el arreglo. Recuerda que la primera posición del arreglo es 0.
        } else {
            printf("\nEl voto ingresado es incorrecto.\n");
        }

        printf("Ingresa el siguiente voto (0 - Para terminar): ");
        scanf("%d", &VOT);
    }

    printf("\nResultados de la Elección\n");

    for (I = 0; I < 5; I++) {
        printf("Candidato %d: %d\n", I + 1, ELE[I]);
    }

    return 0;
}
