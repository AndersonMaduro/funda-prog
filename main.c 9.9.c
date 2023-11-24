#include <stdio.h>

typedef struct {
int matricula;
char nombre[20];
int carrera;
float promedio;
} alumno;

void lee(FILE *);

void main(void) {
FILE *ar;

if ((ar = fopen("ad1.dat", "r")) != NULL) {
    lee(ar);
    fclose(ar);
} else {
    printf("\nEl archivo no se puede abrir");
}

void lee(FILE *ap) {
alumno alu;
  while (!feof(ap)) {
    fread(&alu, sizeof(alumno), 1, ap);
    printf("\nMatrícula: %d", alu.matricula);
    printf("\tCarrera: %d", alu.carrera);
    printf("\tPromedio: %f\t", alu.promedio);
    puts(alu.nombre);
}
}
}
