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
    /*for(i=0;i<len;i++)
    {

            printf("LISTA EMPLEADOS: \n");
            printEmployees(employeeList[i]);





    }*/


