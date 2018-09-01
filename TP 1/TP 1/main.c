#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    char opcionOperaciones;
    float numeroUno;
    float numeroDos;
    float suma=0;
    float resta=0;
    float multiplicacion=0;
    float division=0;
    int resultado;

    do
    {
        system("cls");
        fflush(stdin);
        opcion=mostrarMenu(numeroUno,numeroDos);


        switch(opcion)
        {
            case 1: system("cls");
            numeroUno=getfloat("Ingrese el 1er operando:");
            fflush(stdin);
            break;

            case 2: system("cls");
            numeroDos=getfloat("Ingrese el 2do operando:");
            fflush(stdin);
            break;

            case 3: system("cls");
            opcionOperaciones=mostrarMenudeOperaciones();
            switch(opcionOperaciones)
            {
                case 'a': suma=SumarOperandos(numeroUno, numeroDos);
                break;

                case 'b': resta=restadeoperandos(numeroUno, numeroDos);
                break;

                case 'c': division=divisiondeoperandos(numeroUno, numeroDos);
                break;

                case 'd': multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);
                break;

                case 'e': resultado=factorial(numeroUno);
                resultado=factorial(numeroDos);
                break;
            }
            /*
            mostrarResultados(suma,"El resultado de la suma es: ");*/
            break;
       /*      case 4:

                break;
            case 5:


                break;
            case 6:


                break;
            case 7:


                break;
            case 8: suma=SumarOperandos(numeroUno, numeroDos);
            resta=restadeoperandos(numeroUno, numeroDos);
            multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);
            division=divisiondeoperandos(numeroUno, numeroDos);

                break;  */
            case 5:

                seguir = 'n';
                break;
        }

   }while(seguir!='n');

   return 0;
}


