// Intro to C Programming
// Miguel Marines
/* Ordenar en orden ascendente tres números.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, C;

    printf("Ingresa el primer numero: ");
    scanf("%i", &A);

    printf("\nIngresa el segundo numero: ");
    scanf("%i", &B);

    printf("\nIngresa el tercer numero: ");
    scanf("%i", &C);

    if (A < B)
    {
        if (B < C)
            printf("\n\n Los numeros ordenados son: %i, %i, %i", A, B, C);
        else
        {
            if (A < C)
                printf("\n\n Los numeros ordenados son: %i, %i, %i", A, C, B);
            else
                printf("\n\n Los numeros ordenados son: %i, %i, %i", C, A, B);
        }
    }
    else
    {
        if (A < C)
            printf("\n\n Los numeros ordenados son: %i, %i, %i", B, A, C);
        else
        {
            if (B < C)
                printf("\n\n Los numeros ordenados son: %i, %i, %i", B, C, A);
            else
                printf("\n\n Los numeros ordenados son: %i, %i, %i", C, B, A);
        }
    }

    printf("\n\n");

    return 0;
}
