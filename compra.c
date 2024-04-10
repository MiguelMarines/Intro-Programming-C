// Intro to C Programming
// Miguel Marines
// Monto de compra con impuesto y sin impuesto.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, Costo, IVA;

    printf("\nIngresa el total de la compra: ");
    scanf("%f", &x);

    Costo = x / 1.16;
    IVA = x - Costo;

    printf("\n\nEl total de la compra sin IVA es de: %f", Costo);
    printf("\n\nEl IVA es de: %f", IVA);
    printf("\n\n");

    return 0;
}
