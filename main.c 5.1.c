#include <stdio.h>

int main(void) {
    int i, num, count = 0;
    int arr[100];

    for (i = 0; i < 100; i++) {
        printf("Ingrese el elemento %d del arreglo: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\n\nIngrese el número que se va a buscar en el arreglo: ");
    scanf("%d", &num);

    for (i = 0; i < 100; i++) {
        if (arr[i] == num) {
            count++;
        }
    }

    printf("\nEl %d se encuentra %d veces en el arreglo.\n", num, count);

    return 0;
}
