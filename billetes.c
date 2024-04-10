// Intro to C Programming
// Miguel Marines
/* Se da una cantidad y se regresa el número de
 billetes de cada cantidad, para cubrir el monto.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, b200, b50, b20, b1;

    printf("Ingresa la cantidad: ");
    scanf("%i", &x);

    b200 = x / 200;
    x = x % 200;
    b50 = x / 50;
    x = x % 50;
    b20 = x / 20;
    x = x % 20;
    b1 = x;

    printf("\n\n Billetes de 200 = %i", b200);
    printf("\n\n Billetes de 50 = %i", b50);
    printf("\n\n Billetes de 20 = %i", b20);
    printf("\n\n Billetes de 1 = %i", b1);
    printf("\n\n");

    return 0;
}
