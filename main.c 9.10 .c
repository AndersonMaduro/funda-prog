#include <stdio.h>

typedef struct {
int matricula;
char nombre[20];
int carrera;
float promedio;
} alumno;

void modifica(FILE *);

int main(void) {
FILE *ar;
  if ((ar = fopen("ad1.dat", "r+")) != NULL) {
    modifica(ar);
    fclose(ar);
} else {
    printf("\nEl archivo no se puede abrir");
}

}

void modifica(FILE *ap) {
int d;
alumno alu;

  printf("Ingrese el número de registro que desea modificar: ");
scanf("%d", &d);

fseek(ap, (d - 1) * sizeof(alumno), 0);
fread(&alu, sizeof(alumno), 1, ap);

printf("Ingrese el promedio correcto del alumno: ");
scanf("%f", &alu.promedio);

fseek(ap, (d - 1) * sizeof(alumno), 0);
fwrite(&alu, sizeof(alumno), 1, ap);
}
