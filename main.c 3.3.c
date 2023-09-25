#include <stdio.h>

int main(void) {
    float PAG, SPA;
    SPA = 0;

    printf("Ingrese el primer pago:\t");
    scanf("%f", &PAG);

    while (PAG >= 1) {
        SPA = SPA + PAG;
        printf("Ingrese el siguiente pago:\t");
        scanf("%f", &SPA);}
    

    printf("\nEl total de pagos del mes es: %.2f", SPA);

    
}