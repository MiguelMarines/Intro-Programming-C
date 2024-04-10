// Intro to C Programming
// Miguel Marines
// Conteo de números pares e impares.

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int TotalPares = 0, TotalImpares = 0, a;

    do
    {
        printf("Ingresa un numero: ");
        scanf("%i", &a);

        if (a != 0)
        {
            if (a % 2 == 0)
                TotalPares = TotalPares + 1;
            else
                TotalImpares = TotalImpares + 1;
        }
    }
    while (a != 0);

    printf("\nEl total de los numeros pares es %i ", TotalPares);
    printf("\nEl total de los numero impares es %i ", TotalImpares);
    printf("\n\n");

    return 0;
}
