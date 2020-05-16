#include <stdio.h>
#include <string.h>
/** \brief permite ingresar numero floatante y validarlo
 *
 * \param mensaje[] char pide numero del tipo flotante
 * \param error[] char mensaje de error
 * \param int numero minimo
 * \param int numero maximo
 * \return float devuelve dato del tipo floatante ya validado
 *
 */
float getfloat(char mensaje[],char error[],int,int);

/** \brief permite ingresar numero entero y validarlo
 *
 * \param mensaje[] char pide numero del tipo entero
 * \param mensajeError[] char mensaje de error
 * \param min int numero minimo
 * \param max int numero maximo
 * \return int devuelve dato del tipo entero ya validado
 *
 */
int getint(char mensaje[],char mensajeError[],int min,int max);

/** \brief permite ingresar cadena de caracteres
 *
 * \param mensaje[] char pide dato del tipo string
 * \param dato[] char dato ingresado
 * \param tam int tamaño de la cadena de caracteres

 *
 */
void getstring(char mensaje[],char dato[],int tam);

/** \brief permite generar id automaticamente
 *
 * \param valorEstatico int es el dato del tipo entero que inicializa el contador
 * \param contador int contador que suma consecutivamente al dato del tipo entero las veces que sean necesarias
 * \return devuelve el numero consecutivo ya sumado
 *
 */
int generadorId(int valorEstatico,int contador);

