#include <stdio.h>

void contarLetras(char cadena[]) {
    int contadorMinusculas = 0;
    int contadorMayusculas = 0;

    for (int i = 0; cadena[i] != '\0'; ++i) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z') {
            contadorMinusculas++;
        } else if (cadena[i] >= 'A' && cadena[i] <= 'Z') {
            contadorMayusculas++;
        }
    }

    printf("Letras minúsculas: %d\n", contadorMinusculas);
    printf("Letras mayúsculas: %d\n", contadorMayusculas);
}

int main() {
    char entrada[100];

    printf("Ingresa una cadena: ");
    fgets(entrada, sizeof(entrada), stdin);

    contarLetras(entrada);

    return 0;
}
