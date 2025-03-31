#include <stdio.h>
int main(){
    printf("hola mundo");
    int num = 3;
    int *punt;
    punt = &num;
    printf("Contenido del puntero: %p",punt);
    printf("\nDireccion de memoria almacenada por el puntero: %p",punt);
    printf("\nDireccion de memoria de la variable: %p",&num);
    printf("\nDireccion de memoria del puntero: %p",&punt);
    printf("\nTamanio de memoria: %zu",sizeof(num));
    return 0;
}