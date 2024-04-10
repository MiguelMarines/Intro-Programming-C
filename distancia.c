// Intro to C Programming
// Miguel Marines
// Distancia recorrida según la velocidad.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v, d5, d8, d12;

    printf("\nIngresa el valor de la velocidad: ");
    scanf("%i", &v);

    d5 = v * 5;
    d8 = v * 8;
    d12 = v * 12;

    printf("\n\n La distancia que el carro recorrera en 5 horas es de %i.", d5);
    printf("\n\n La distancia que el carro recorrera en 8 horas es de %i.", d8);
    printf("\n\n La distancia que el carro recorrera en 12 horas es de %i.", d12);
    printf("\n\n");

    return 0;
}
