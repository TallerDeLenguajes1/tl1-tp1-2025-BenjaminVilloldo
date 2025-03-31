#include <stdio.h>

int calcularCuadrado(int num);
void vCalcularCuadrado(int num);
void mostrarDireccionContenido(int num);
void Invertir(int a,int b);
void orden(int a, int b);

int main() {
    int a = 3;
    int b = 5;
    printf("Cuadrado de a: %d",calcularCuadrado(a));
    printf("\nCuadrado de a: %d",calcularCuadrado(a));
    vCalcularCuadrado(a);
    vCalcularCuadrado(b);
    mostrarDireccionContenido(a);
    mostrarDireccionContenido(b);
    Invertir(a,b);
    orden(b,a);
    return 0;
}

int calcularCuadrado(int num) {
    return num*num;
}

void vCalcularCuadrado(int num) {
    printf("El cuadrado de %d es: %d",num,num*num);
}

void mostrarDireccionContenido(int num) {
    printf("Direccion de la variable: %d",&num);
    printf("Contenido de la variable: %d",num);
}

void Invertir(int a,int b) {
    int c;
    printf("Valor de a antes de invertir: %d",a);
    printf("Valor de b antes de invertir: %d",a);
    c = a;
    a = b;
    b = c;
    printf("Valor de a despues de invertir: %d",a);
    printf("Valor de c despues de invertir: %d",a);
    
}

void orden(int a, int b) {
    int c;
    if (a<b) {
        printf("Valor mas chico: %d",a);
        printf("Valor mas grande: %d",b);
    } else {
        c = a;
        a = b;
        b = c;
        printf("Valor mas chico: %d",a);
        printf("Valor mas grande: %d",b);
    }
    
}
