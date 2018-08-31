#include <stdio.h>
#include <stdlib.h>

int mostrarMenu();
float getfloat(char[]);
float SumarOperandos(float,float);
void mostrarResultados(float,char[]);
char getletra(char[]);

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

    printf(mensaje);
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
    printf(mensaje);

}

char getletra(char m[])
{
    char letra;

    printf(m);
    fflush(stdin);
    scanf("%c",&letra);

    return letra;
}
