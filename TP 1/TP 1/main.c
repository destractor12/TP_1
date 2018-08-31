#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno;
    float numeroDos;
    float suma=0;
    float resta=0;
    float multiplicacion=0;
    float division=0;


    do
    {
        system("cls");
      fflush(stdin);
      opcion=mostrarMenu();


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
            suma=SumarOperandos(numeroUno, numeroDos);
            mostrarResultados(suma,"El resultado de la suma es: ");
            break;
       /*      case 4: resta=restadeoperandos(numeroUno, numeroDos);


                break;
            case 5: multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);


                break;
            case 6: division=divisiondeoperandos(numeroUno, numeroDos);


                break;
            case 7:resultado=factorial(numeroUno!numeroDos);


                break;
            case 8: suma=SumarOperandos(numeroUno, numeroDos);
            resta=restadeoperandos(numeroUno, numeroDos);
            multiplicacion=multiplicaciondeoperandos(numeroUno, numeroDos);
            division=divisiondeoperandos(numeroUno, numeroDos);

                break;  */
            case 9:

                seguir = 'n';
                break;
        }

   }while(seguir!='n');

   return 0;
}


int validarEntero(int numero,char texto[],int min,int max);
{
    while(numero<min || numero>max)
    {
        printf("Reingrese %s",texto)
    }
    return numero;
}
