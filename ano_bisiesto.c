// Intro to C Programming
// Miguel Marines
// Determinar si el año es bisiesto o no.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int anio;

    printf("Ingresa un año: ");
    scanf("%i", &anio);

    if (anio % 4 == 0 && anio % 100 != 0)
        printf("\n El año %i es bisiesto", anio);
    else if (anio % 400 == 0)
        printf("\n El año %i es bisiesto", anio);
    else
        printf("\n El año %i NO es bisiesto", anio);

    printf("\n\n");

    return 0;
}
