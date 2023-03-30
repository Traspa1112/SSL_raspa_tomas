#include <conio.h>
#include <stdio.h>

void main() {
    char c;
    printf("Ingrese un caracter: ");
    c = getchar();

    printf("\nEl valor en ASCII de %c es %d\n", c, c);
    printf("Presione una tecla para salir...\n");
    getch();
}