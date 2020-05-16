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
        scanf("%f",&valor);
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

/*eAbonados crearUnAbonado(void)
{

    eAbonados unAbonado;

    unAbonado.abonadoId=getint("ingrese id");
    unAbonado.numero=getint("ingrese numero");
    getstring(unAbonado.nombreApellido,"ingrese nombre");

    //unAbonado.estado==OCUPADO;
    return unAbonado;


}
void mostrarUnAbonado(eAbonados unAbonado)
{
    printf("%8d%8d%8s%8d\n",unAbonado.abonadoId,
                         unAbonado.numero,
                         unAbonado.nombreApellido,
                         unAbonado.estado);
}*/
int generadorId(int valorEstatico,int contador)
{



    return valorEstatico+contador;
}
/*eAbonados cargarUnAbonado()
{
    eAbonados unAbonado;

    unAbonado.abonadoId=getint("ingrese id");
    unAbonado.numero=getint("ingrese numero");
    getstring(unAbonado.nombreApellido,"ingrese nombre");

    return unAbonado;

}*/
/*
void harcodearAbonados(eAbonados unAbonado[])
{
    int i;
    int id[3]={1,2,3};
    int numero[3]={1234,5678,9012};
    char nombre[3][20]={"maria","ayelen","sofia"};
    int estado[3]={OCUPADO,OCUPADO,OCUPADO};

    for(i=0;i<3;i++)
    {
        unAbonado[i].abonadoId=id[i];
        unAbonado[i].numero=numero[i];
        strcpy(unAbonado[i].nombreApellido,nombre[i]);
        unAbonado[i].estado=estado[i];
    }
}*/
/*void mostrarUnAbonado(eAbonados unAbonado)
{
    printf("%8d%8d%8s%8d\n",unAbonado.abonadoId,
                         unAbonado.numero,
                         unAbonado.nombreApellido,
                         unAbonado.estado);
}
void inicializarEstado(eAbonados abonados[], int sizeAbonados)
{

    int i;
    for(i=0;i<sizeAbonados;i++)
    {
        abonados[i].estado=LIBRE;
    }
}
int buscarLibre(eAbonados abonados[],int sizeAbonados)
{
    int index=-1;
    int i;
    if(index!=-1)
    {
        for(i=0;i<sizeAbonados;i++)
        {
            if(abonados[i].estado==LIBRE)
            {
                index=i;
                break;
            }
        }

    }
    return index;


}
int cargarAbonados(eAbonados abonados[],int sizeAbonados)
{
    int i;
    int index;
    index=buscarLibre(abonados,sizeAbonados);
    if(abonados[index].estado!=-1)
    {
        for(i=0;i<sizeAbonados;i++)
        {
            abonados[i]=cargarUnAbonado();
        }

    }

    else
        {
            abonados[i].estado==OCUPADO;
           printf("espacio agotado");
        }


        return -1;

}
void mostrarAbonados(eAbonados abonados[],int sizeAbonados)
{
    int i;
    if(abonados[i].estado==OCUPADO);
    {
        for(i=0;i<sizeAbonados;i++)
        {
            mostrarUnAbonado(abonados[i]);
        }
    }



}*/
/*int modificarDatosAbonados(eAbonados listado[], int sizeAbonados)
{
    int i=0;
    int id;
    char respuesta[20];
    int retorno;
    retorno=CANCELADO;
    char respuestaUsuario[20];
    char nombre[20];
    strcpy(respuesta,"no");
    char nombreSeleccionado[20];

    id=getint("ingrese id");
    for(i=0;i<sizeAbonados;i++)
        {
            if(listado[i].estado==OCUPADO && id==listado[i].abonadoId)
            {
                        printf("%8d%8s\n",
                        listado[i].numero,
                        listado[i].nombreApellido);
                getstring(nombreSeleccionado,"seleccione nombre");

                if(strcmp(nombreSeleccionado,listado[i].nombreApellido)==0)
                {
                    getstring(nombre,"ingrese el nombre y apellido nuevo");
                    getstring(respuestaUsuario,"¿realizar modificacion?");
                    if(strcmp(respuestaUsuario,respuesta)>0)
                    {
                    strcpy(listado[i].nombreApellido,nombre);
                    printf("modificacion completa");
                    retorno=MODIFICADO;
                    break;



                    }else
                        {
                            printf("modificacion cancelada\n");


                        }
                }else
                    {
                        printf("nombre invalido");
                    }

            }







        }





        return retorno;

}*/
/*
int eliminarAbonado(eAbonados listado[], int sizeAbonados)
{
    int i;
    int id;
    char respuesta[3];
    int retorno;
    retorno=CANCELADO;
    char respuestaUsuario[20];
    strcpy(respuesta,"no");
        id=getint("ingrese id");

        for(i=0;i<sizeAbonados;i++)
        {
             if(listado[i].estado==OCUPADO && id==listado[i].abonadoId)
            {
                getstring(respuestaUsuario,"¿realizar eliminacion?");

                if(strcmp(respuestaUsuario,respuesta)>0)
                {

                    printf("eliminacion realizada!");
                    listado[i].estado=LIBRE;
                    retorno=ELIMINADO;
                    break;
                }else
                {
                    printf("eliminacion cancelada");
                    break;
                }

            }else
                {
                    id=getint("reingrese id");
                }
        }

    return retorno;


}*/
/*void orderAbonados(eAbonados listado[],int sizeAbonados)
{
    int i;
    int j;
    eAbonados auxAbonado;
    for(i=0;i<sizeAbonados;i++)
    {
        if(listado[i].estado!=OCUPADO)
            {
                continue;
            }
        for(j=0;j<sizeAbonados;j++)
        {
            if(listado[j].estado!=OCUPADO)
            {
                continue;
            }
            if(strcmp(listado[i].nombreApellido,listado[j].nombreApellido)<0)
            {


                auxAbonado=listado[i];
                listado[i]=listado[j];
                listado[j]=auxAbonado;;

            }
        }
    }
}*/
//BUSCAR MAXIMO
/*
float buscarPromedioMaximo(eAlumno listado[], int tam)
{
    int i;
    float maxPromedio;
    for(i=0; i<tam; i++)
    {
        if(listado[i].promedio>maxPromedio || i==0)
        {
            maxPromedio = listado[i].promedio;
        }
    }

    return maxPromedio;
}
*/
