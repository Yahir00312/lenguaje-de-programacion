#include <stdio.h>

int main() {
    int edad;

    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Usted es mayor de edad.\n");
    } else {
        printf("Usted es menor de edad.\n");
    }

    return 0;
}
