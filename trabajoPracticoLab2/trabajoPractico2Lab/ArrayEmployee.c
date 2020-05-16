#include "ArrayEmployee.h"
int initEmployee(Employee employeeList[],int len)
{
    int i;
    int errorValue=-1;
    for(i=0;i<len;i++)
    {

        employeeList[i].isEmpty=LIBRE;
        errorValue=0;

    }
    return errorValue;

}
int searchFree(Employee employeeList[],int len)
{
    int index=-1;
    int i;
    for(i=0;i<len;i++)
    {
        if(employeeList[i].isEmpty==LIBRE)
        {
            index=i;
            break;
        }
    }
    return index;
}
int addEmployee(Employee employeeList[],int len,int id,char name[],char lastname[],float salary,int sector,int accountant)
{
    int index;
    index=searchFree(employeeList,len);
    if(index!=-1)
    {
        id=generadorId(1,accountant);
        getstring("ingrese nombre",name,51);
        getstring("ingrese apellido",lastname,51);
        salary=getfloat("ingrese salario de 30000 hasta 100000 ","reingrese salario",30000,100000);
        sector=getint("ingrese sector de 1 a 20 ","ingrese sector valido",1,20);


        employeeList[index].id=id;
        strcpy(employeeList[index].name,name);
        strcpy(employeeList[index].lastname,lastname);
        employeeList[index].salary=salary;
        employeeList[index].sector=sector;
        employeeList[index].isEmpty=OCUPADO;

    }

    return index;

}
void printEmployees(Employee aEmployee)
{
        printf("%8d%8s%8s%8f%8d%8d\n",aEmployee.id,
                          aEmployee.name,
                          aEmployee.lastname,
                          aEmployee.salary,
                          aEmployee.sector,
                          aEmployee.isEmpty);



}
void printEmployeesList(Employee employeeList[],int len)
{
    int i;

         for(i=0;i<len;i++)
        {
          if(employeeList[i].isEmpty==OCUPADO)
            {
                printEmployees(employeeList[i]);


            }
        }


}
int findEmployeeById(Employee employeeList[],int len,int id)
{
    int index=-1;
    int i;
    for(i=0;i<len;i++)
    {
        if(employeeList[i].isEmpty==OCUPADO)
        {
            if(employeeList[i].id==id)
            {
                index=i;
                break;
            }

        }

    }
    return index;
}
int modifyEmployee(Employee employeeList[],int len,int id)
{
    int i;
    int retorno=-1;
    int opcion;
    int index;
    char respuestaUsuario[3];
    char respuesta[3];
    char nombreAux[51];
    char apellidoAux[51];
    float salarioAux;
    int sectorAux;
    strcpy(respuesta,"no");
    index=-1;


    printEmployeesList(employeeList,len);
    id=getint("ingrese id a modificar","ingrese id valido",1,1000);
    index=findEmployeeById(employeeList,len,id);
    printf("index es: %d\n",index);
    if(index!=-1)
    {

    for(i=0;i<len;i++)
    {
        if(employeeList[i].isEmpty==OCUPADO && employeeList[i].id==id)
        {
            printEmployees(employeeList[i]);
            printf("1.Nombre\n2.Apellido\n3.Salario\n4.Sector\n");
            opcion=getint("elija la opcion que quiera modificar","ingrese opcion valida",1,4);
            switch(opcion)
            {
             case 1:
                getstring("ingrese nombre nuevo",nombreAux,51);
                getstring("realizar modificacion?",respuestaUsuario,3);
                if(strcmp(respuestaUsuario,respuesta)>0)
                {
                    strcpy(employeeList[i].name,nombreAux);
                     printf("modificacion completa\n");
                        retorno=0;
                        break;
                 }else
                     {

                        printf("modificacion cancelada\n");
                        break;

                     }

                break;
             case 2:
                getstring("ingrese apellido nuevo",apellidoAux,51);
                getstring("realizar modificacion?",respuestaUsuario,3);
                if(strcmp(respuestaUsuario,respuesta)>0)
                {
                    strcpy(employeeList[i].lastname,apellidoAux);
                     printf("modificacion completa\n");
                        retorno=0;
                        break;
                 }else
                     {

                        printf("modificacion cancelada\n");
                        break;
                     }

                    break;
             case 3:
                 salarioAux=getfloat("ingrese salario desde 30000 hasta 100000","reingrese salario",30000,100000);
                getstring("realizar modificacion?",respuestaUsuario,3);
                if(strcmp(respuestaUsuario,respuesta)>0)
                {
                   employeeList[i].salary=salarioAux;
                     printf("modificacion completa\n");
                        retorno=0;
                        break;
                 }else
                     {

                        printf("modificacion cancelada\n");
                        break;
                     }
                break;
                case 4:
                    sectorAux=getint("ingrese sector nuevo","reingrese sector",1,20);
                    getstring("realizar modificacion?",respuestaUsuario,3);
                    if(strcmp(respuestaUsuario,respuesta)>0)
                    {
                        employeeList[i].sector=sectorAux;
                        printf("modificacion completa\n");
                        retorno=0;
                        break;
                    }else
                     {

                        printf("modificacion cancelada\n");
                        break;

                     }
                        break;
            }


        }
    }

    }

    return retorno;

}


