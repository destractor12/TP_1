#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int mostrarMenu()
{
    int opcion;

        printf("1- Ingresar 1er operando (A= X)\n");
        printf("2- Ingresar 2do operando (B= Y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);

    return opcion;

}

float getfloat(char mensaje[])
{
    float num;

    printf("%s",mensaje);
    scanf("%f",&num);

    return num;
}

float SumarOperandos(float num1, float num2)
{
    float suma;

    suma = num1+num2;

    return suma;

}

void mostrarResultados(float re, char mensaje[])
{
    printf("%s %.2f",mensaje);

}

char getletra(char m[])
{
    char letra;

    printf(m);
    fflush(stdin);
    scanf("%c",&letra);

    return letra;
}

int pedirEntero(char texto[],int min,int max)
{
    int numero;

    printf("Ingrese %s", texto);
    scanf("%d",&numero)

    numero = validarEntero(numero,"Reingrese %s",);

    return numero;
}

int factorial(int num)
