#include <stdio.h>

// a) Función que devuelve el cuadrado de un número
int cuadrado(int num) {
    return num * num;
}

// b) Función que devuelve el cuadrado de un número con tipo void
void cuadradoVoid(int num, int *resultado) {
    *resultado = num * num;
}

// c) Función que muestra la dirección y el contenido de una variable
void mostrarDireccionYContenido(int *num) {
    printf("Dirección de memoria: %p\n", (void*)num);
    printf("Contenido: %d\n", *num);
}

// d) Función que invierte dos valores
void invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// e) Función que ordena dos valores
void ordenar(int *a, int *b) {
    if (*a > *b) {
        invertir(a, b);
    }
}

int main() {
    int num1 = 5, num2 = 3;
    
    // a) Uso de la función cuadrado
    printf("Cuadrado de %d: %d\n", num1, cuadrado(num1));
    
    // b) Uso de la función cuadradoVoid
    int resultado;
    cuadradoVoid(num1, &resultado);
    printf("Cuadrado (usando void): %d\n", resultado);
    
    // c) Mostrar dirección y contenido
    printf("\nInformación de la variable num1:\n");
    mostrarDireccionYContenido(&num1);
    
    // d) Invertir valores
    printf("\nAntes de invertir: num1 = %d, num2 = %d\n", num1, num2);
    invertir(&num1, &num2);
    printf("Después de invertir: num1 = %d, num2 = %d\n", num1, num2);
    
    // e) Ordenar valores
    printf("\nAntes de ordenar: num1 = %d, num2 = %d\n", num1, num2);
    ordenar(&num1, &num2);
    printf("Después de ordenar: num1 = %d, num2 = %d\n", num1, num2);
    
    return 0;
}
