#include <stdio.h>
#include <stdlib.h>
int cuadrado(int num);
void cuadradoVoid (int num);
void direcMemo(int var);
void cambiazo(int num1, int num2);
void mayorMenor(int num1,int num2);
//void pares(int num);
int main (){
    int numerox1,numerox2,cuadra;
    printf("Ingrese 2 numeros \n");
    scanf("%i %i",&numerox1,&numerox2);
    cuadra=cuadrado(numerox1);
    printf("El cuadrado del numero primer numero es: %i \n",cuadra);
    cuadradoVoid(numerox2);
    direcMemo(numerox1);
    cambiazo(numerox1,numerox2);
    mayorMenor(numerox1,numerox2);
    //pares(numerox1);
    return 0;
}
int cuadrado(int num){
    int cuadradox;
    cuadradox=num*num;
    return cuadradox;
}
void cuadradoVoid (int num){
    int c;
    c=num*num;
    printf("El cuadrado del segundo numero es: %i \n",c);
}
void direcMemo(int var){
    int *punt;
    punt=&var;
    printf("El contenido del primer numero es: %i \n",var);
    printf("La Direccion de Memoria de el Primer Numero es: %p\n",punt);
}
void cambiazo(int num1, int num2){
    int aux;
    printf("El contenido del primer numero es: %i\n",num1);
    printf("El contenido del segundo numero es: %i\n",num2);
    aux=num1;
    num1=num2;
    num2=aux;
    printf("Despues del cambiazo\n");
    printf("El contenido del primer numero es: %i\n",num1);
    printf("El contenido del segundo numero es: %i\n",num2);
}
void mayorMenor(int num1,int num2){
    if (num1>num2)
    {
        printf("El primero es mas grande\n");
    }else if (num2>num1)
    {
        printf("El segundo es mas grande\n");
    }else{
        printf("Son iguales\n");
    }
}