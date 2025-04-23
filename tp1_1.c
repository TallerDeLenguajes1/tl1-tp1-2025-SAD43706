#include <stdio.h>
#include <stdlib.h>

int main (){
    int *punt;
    int cosox=4;
    punt=&cosox;
    printf("Contenido del puntero: %i \n",*punt);
    printf("Dirección de memoria almacenada por el puntero: %p \n",punt);
    printf("La dirección de memoria de la variable: %p \n",&cosox);
    printf("La direccion de memoria del puntero: %p \n",&punt);
    printf("El tamaño de memoria utilizado por la variable cosox en bits : %i",sizeof(cosox));
    return 0;
}