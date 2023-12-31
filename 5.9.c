#include <stdio.h>

const int MAX = 100;

void Lectura(int *, int);
int Busca(int *, int, int);

int main(void)
{
    int RES, ELE, TAM, VEC[MAX];

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    } while (TAM > MAX || TAM < 1); // Usar || en lugar de 

    Lectura(VEC, TAM);

    printf("Ingrese el elemento a buscar: ");
    scanf("%d", &ELE);

    RES = Busca(VEC, TAM, ELE);

    if (RES)
    {
        printf("El elemento se encuentra en la posición %d\n", RES);
    }
    else
    {
        printf("El elemento no se encuentra en el arreglo\n");
    }

    return 0;
}

void Lectura(int A[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

int Busca(int A[], int T, int K)
{
    int I = 0, BAN = 0, RES;

    while (I < T && !BAN)
    {
        if (A[I] == K)
        {
            BAN++;
        }
        else
        {
            I++;
        }
    }

    if (BAN)
    {
        RES = I + 1; // Se asigna I+1 dado que las posiciones en el arreglo comienzan desde cero.
    }
    else
    {
        RES = BAN;
    }

    return RES;
}
