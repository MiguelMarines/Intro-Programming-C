// Intro to C Programming
// Miguel Marines
// Determinar si un número es positivo o negativo.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Ingresa un número: ");
    scanf("%i", &num);

    if (num >= 0)
        printf("\n\n %i Es un número positivo.", num);
    else
        printf("\n\n %i Es un número negativo.", num);

    printf("\n\n");

    return 0;
}
