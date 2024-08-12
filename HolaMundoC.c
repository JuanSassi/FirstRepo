#include <stdio.h>

// Declaración de las funciones
int suma(int a, int b);
int resta(int a, int b);
int multiplicacion(int a, int b);
float division(int a, int b);

int main() {
    printf("Hola Mundo\n");
    int num1, num2;
    printf("Introduce el primer número: ");
    scanf("%d", &num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &num2);

    printf("Suma: %d + %d = %d\n", num1, num2, suma(num1, num2));
    printf("Resta: %d - %d = %d\n", num1, num2, resta(num1, num2));
    printf("Multiplicación: %d * %d = %d\n", num1, num2, multiplicacion(num1, num2));
    printf("División: %d / %d = %.2f\n", num1, num2, division(num1, num2));

    return 0;
}

// Definición de las funciones
int suma(int a, int b) {
    return a + b;
}

int resta(int a, int b) {
    return a - b;
}

int multiplicacion(int a, int b) {
    return a * b;
}

float division(int a, int b) {
    if (b != 0) {
        return (float)a / b;
    } else {
        printf("Error: División por cero\n");
        return 0.0;
    }
}
