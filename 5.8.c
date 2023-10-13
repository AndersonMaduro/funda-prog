#include <stdio.h>

const int TAM = 100;

void Imprime(int *, int);
void Primo(int, int *);

int main(void)
{
    int P[TAM] = {2}; // Inicia con el primer número primo (2).
    int FLA, J = 1, PRI = 3; // Inicia J en 1 para incluir el primer primo.

    while (J < TAM)
    {
        FLA = 1;
        Primo(PRI, &FLA);

        if (FLA)
        {
            P[J] = PRI;
            J++;
        }
        PRI += 2;
    }

    Imprime(P, TAM);
    return 0;
}

void Primo(int A, int *B)
{
    int DI = 3;

    while (*B && (DI * DI <= A))
    {
        if ((A % DI) == 0)
        {
            *B = 0;
        }
        DI += 2; // Solo verifica números impares como divisores.
    }
}

void Imprime(int Primos[], int T)
{
    int I;
    for (I = 0; I < T; I++)
    {
        printf("Primos[%d]: %d\n", I, Primos[I]);
    }
}

