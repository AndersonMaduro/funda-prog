#include <stdio.h>

char convertirMayusculaMinuscula(char caracter) {
    if (caracter >= 'a' && caracter <= 'z') {
        // Convertir minúscula a mayúscula
        return caracter - 'a' + 'A';
    } else if (caracter >= 'A' && caracter <= 'Z') {
        // Convertir mayúscula a minúscula
        return caracter - 'A' + 'a';
    } else {
        // Mantener caracteres que no son letras sin cambios
        return caracter;
    }
}

int main() {
    char cadena[] = "Hola Mundo 123!";
    int i;

    printf("Cadena original: %s\n", cadena);

    // Convertir cada caracter en la cadena
    for (i = 0; cadena[i] != '\0'; i++) {
        cadena[i] = convertirMayusculaMinuscula(cadena[i]);
    }

    printf("Cadena convertida: %s\n", cadena);

    return 0;
}
