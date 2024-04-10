// Intro to C Programming
// Miguel Marines
/* Calcular total de sueldo y comisión de vendedor.*/

#include <stdio.h>

int main() {
    int C;
    float S, V, total, comision;

    printf("\nCalcular Sueldo \n1. Si \n2.No \n");
    scanf("%i", &C);

    while (C != 2) {
        printf("\nIngresa el sueldo? ");
        scanf("%f", &S);
        printf("\nIngresa sus ventas? ");
        scanf("%f", &V);

        if (V < 1200)
            comision = 0;
        else if (V < 2200)
            comision = V * 0.08;
        else
            comision = V * 0.16;

        total = S + comision;
        printf("\n\nEl sueldo es %f", S);
        printf("\n\nLa comision es %f", comision);
        printf("\n\nEl total es %f \n", total);

        printf("\nCalcular Sueldo \n1. Si \n2.No \n");
        scanf("%i", &C);
    }

    printf("\n\n");
    
    return 0;
}
