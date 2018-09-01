#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    char opcionOperaciones;
    char opcionResultados;
    float numeroUno;
    float numeroDos;
    float suma=0;
    float resta=0;
    float multiplicacion=0;
    float division=0;
    int resultado;
    int resultado2;

    do
    {
        system("cls");
        fflush(stdin);
        opcion=mostrarMenu(numeroUno,numeroDos);


        switch(opcion)
        {
        case 1:
            system("cls");
            numeroUno=getfloat("Ingrese el 1er operando:");
            fflush(stdin);
            break;

        case 2:
            system("cls");
            numeroDos=getfloat("Ingrese el 2do operando:");
            fflush(stdin);
            break;

        case 3:
            system("cls");
            opcionOperaciones=mostrarMenudeOperaciones();
            switch(opcionOperaciones)
            {
            case 'a':
                suma=SumarOperandos(numeroUno, numeroDos);

                break;

            case 'b':
                resta=restadeoperandos(numeroUno, numeroDos);
                break;

            case 'c':
                division=divisiondeoperandos(numeroUno, numeroDos);
                break;

            case 'd':
                multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);
                break;

            case 'e':
                resultado=factorial(numeroUno);
                resultado2=factorial(numeroDos);
                break;
            }

            break;
        case 4:
            system("cls");
            opcionOperaciones=mostrarMenudeOperaciones();
            switch(opcionOperaciones)
            {
            case 'a':
                suma=SumarOperandos(numeroUno, numeroDos);

                break;

            case 'b':
                resta=restadeoperandos(numeroUno, numeroDos);
                break;

            case 'c':
                division=divisiondeoperandos(numeroUno, numeroDos);
                break;

            case 'd':
                multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);
                break;

            case 'e':
                resultado=factorial(numeroUno);
                resultado2=factorial(numeroDos);
                break;
            }

            break;

        case 5:

            seguir = 'n';
            break;
        }

    }
    while(seguir!='n');

    return 0;
}


