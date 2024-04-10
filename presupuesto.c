// Intro to C Programming
// Miguel Marines
/* Determinar un presupuesto de tapizar o estopear,
con y sin IVA.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int serv;
    float m2, presupuesto, iva, total;
    char fact;

    printf("Que servicio desea? \n1.-Tapizar \n2.-Estopear\n");
    scanf("%i", &serv);
    printf("\nCuantos metros? ");
    scanf("%f", &m2);
    fflush(stdin);
    printf("\nDesea facturar? s/n ");
    scanf(" %c", &fact);

    if (serv == 1)
        presupuesto = 375 / 12.0 * m2;
    else
        presupuesto = 320 / 10.0 * m2;

    if (fact == 's')
        iva = presupuesto * 0.16;
    else
        iva = 0;

    total = presupuesto + iva;

    printf("\n\n El presupuesto es %f \n El IVA es %f \n El total es %f", presupuesto, iva, total);

    printf("\n\n");
    
    return 0;
}
