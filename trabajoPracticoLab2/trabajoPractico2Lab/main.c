#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployee.h"
#define EMPLOYEE 10

int main()
{
    Employee listEmployee[EMPLOYEE];
    int opcion;
    int id;
    char name[51];
    char lastname[51];
    float salary;
    int sector;
    int accountantEmployee=0;

    do
    {
        printf("1.ALTA\n2.MODIFICAR\n3.BAJA\n4.INFORMES\n");
        opcion=getint("ingrese opcion","ingrese opcion valida",1,4);
        switch(opcion)
        {
        case 1:
            addEmployee(listEmployee,EMPLOYEE,id,name,lastname,salary,sector,accountantEmployee);
            accountantEmployee++;
            break;
        case 2:

           printEmployeesList(listEmployee,EMPLOYEE);
            break;

        }


    }while(opcion!=5);
}
