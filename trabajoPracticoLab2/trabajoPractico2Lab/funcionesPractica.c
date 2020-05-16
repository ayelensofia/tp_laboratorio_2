#include "funcionesPractica.h"
void getstring(char mensaje[],char dato[],int tam)
{
    int len;
    printf("%s",mensaje);
    fflush(stdin);
    fgets(dato,tam,stdin);
    len=strlen(dato);
    dato[len-1]='\0';

}

int getint(char mensaje[],char mensajeError[],int min,int max)
{
    int valor;
    printf("%s",mensaje);
    scanf("%d",&valor);
    while(valor<min || valor>max)
    {
        printf("%s",mensajeError);
        scanf("%d",&valor);
    }

    return valor;
}
float getfloat(char mensaje[],char error[],int min,int max)
{
    float flotante;
    printf("%s",mensaje);
    scanf("%f",&flotante);
    while(flotante<min || flotante>max)
    {
        printf("%s",error);
        scanf("%f",&flotante);
    }

    return flotante;
}


int generadorId(int valorEstatico,int contador)
{



    return valorEstatico+contador;
}
