#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "funciones.h"


int mostrarMenu(float num1,float num2)
{
    int opcion;

    printf("1. Ingresar 1er operando (A= %.2f)\n",num1);
    printf("2. Ingresar 2do operando (B= %.2f)\n",num2);
    printf("\n3. Calcular todas las operaciones\n");
    printf("a) Calcular la suma (A+B)\n");
    printf("b) Calcular la resta (A-B)\n");
    printf("c) Calcular la division (A/B)\n");
    printf("d) Calcular la multiplicacion (A*B)\n");
    printf("e) Calcular el factorial (A!)\n");
    printf("\n4. Informar resultados\n");
    printf("a) El resultado de A+B es: r\n");
    printf("b) El resultado de A-B es: r\n");
    printf("c) El resultado de A/B es: r o No es posible dividir por cero\n");
    printf("d) El resultado de A*B es: r\n");
    printf("e) El factorial de A es: r1 y El factorial de B es: r2\n");
    printf("5. Salir\n");
    printf("Ingrese una opcion: ");
    scanf("%d",&opcion);

    return opcion;

}

char mostrarMenudeOperaciones()
{
    char opcion;

    printf("a) Calcular la suma (A+B)\n");
    printf("b) Calcular la resta (A-B)\n");
    printf("c) Calcular la division (A/B)\n");
    printf("d) Calcular la multiplicacion (A*B)\n");
    printf("e) Calcular el factorial (A!)\n");
    printf("Ingrese una opcion: ");
    fflush(stdin);
    scanf("%c",&opcion);
    tolower(opcion);

    if(opcion != 'a' && opcion != 'b'&& opcion != 'c'&& opcion != 'd'&& opcion != 'e')
    {


        do
        {
            system("cls");
            printf("a) Calcular la suma (A+B)\n");
            printf("b) Calcular la resta (A-B)\n");
            printf("c) Calcular la division (A/B)\n");
            printf("d) Calcular la multiplicacion (A*B)\n");
            printf("e) Calcular el factorial (A!)\n");
            printf("Reingrese una opcion: ");
            fflush(stdin);
            scanf("%c",&opcion);
        }
        while(opcion != 'a'|| opcion != 'b'|| opcion != 'c'|| opcion != 'd'|| opcion != 'e');
    }

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

float restadeoperandos(float num1,float num2)
{
    float resta;

    resta=num1-num2;

    return resta;
}

float divisiondeoperandos(float num1,float num2)
{
    float resultado;

    resultado=num1/(num2);

    if(num1==0||num2==0)
    {
        printf("No es posible dividir por cero");
    }

    return resultado;
}

float multiplicaciondeoperandos(float num1,float num2)
{
    float resultado;

    resultado=num1*(num2);

    return resultado;
}

void mostrarResultados(float re, char mensaje[])
{
    getchar();
    printf("Entro");
    printf("%s %f",mensaje,re);
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
    scanf("%d",&numero);

    numero = validarEntero(numero,"Reingrese %s",18,60);

    return numero;
}

int factorial(float num)
{
    int numerofactorizado;
    int i;

    for(i=num; i>=num; i--)
    {
        numerofactorizado= num*(num-1);
    }
    return numerofactorizado;
}

int validarEntero(int numero,char texto[],int min,int max)
{
    while(numero<min || numero>max)
    {
        printf("Reingrese %s",texto);
        scanf("%d",&numero);
    }
    return numero;
}
