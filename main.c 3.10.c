#include <stdio.h>
#include <math.h>


int main(void) {
  int I, NUM, N, SPA = 0, SIM = 0, CIM = 0;

  printf(" ingrese el numero de datos que se ven a procesar:\t");
  scanf("%d", &N);       


if (N> 0)
{ 
    for ( I =1; I <= N; I++)
    {
    printf("\ningrese el numero:", I);
    scanf("%d", &NUM);
    if (NUM)
     if(pow(-1, NUM) > 0)
       SPA = SPA + NUM;
    else
     {
       SIM = SIM + NUM;
       CIM++;
     }printf("\n La suma de los numeros pares es:%d", SPA);
      printf("\n El promedio de numeros impares es: %5.2f", (float)(SIM / CIM);
    }
    else 
    print("\n El valor de N es incorrecto");
  
}