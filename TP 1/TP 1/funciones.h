

/** \brief muestra el menu de opciones al usuario
 *
 * \return int devuelve la opcion elegida
 *
 */

int mostrarMenu();


/** \brief le pide al usuario que ingrese un numero
 *
 * \param char[] mensaje que se le muestra al usuario
 * \return float devuelve el numero ingresado por el usuario
 *
 */
float getfloat(char[]);

/** \brief suma los numeros ingresados por el usuario
 *
 * \param float
 * \param float
 * \return float
 *
 */
float SumarOperandos(float,float);

void mostrarResultados(float,char[]);

char getletra(char[]);

/** \brief permite el ingreso de un entero y lo valida
 *
 * \param char[] mensaje que se mostrara
 * \param int minimo del rango de validacion
 * \param int maximo del rango de validacion
 * \return int numero validado
 *
 */
int pedirEntero(char[],int,int);

int validarEntero(int,char[],int,int);

/** \brief calcula el factorial de un numero
 *
 * \param int numero ingresado por el usuario
 * \return int factorial del numero ingresado
 *
 */
int factorial(int);
