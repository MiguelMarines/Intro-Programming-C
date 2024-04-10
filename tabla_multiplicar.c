// Intro to C Programming
// Miguel Marines
/* Tabla de multiplicar del número seleccionado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, C, R;

    do {
        printf("De qué número quieres la tabla? ");
        scanf("%i", &N);
        
        if (N != 0) {
            C = 1;
            do {
                R = N * C;
                printf("\n %i x %i = %i", N, C, R);
                C = C + 1;
            } while (C <= 10);
            printf("\n\n");
        }
    } while (N != 0);

    printf("\n\n");
    
    return 0;
}
