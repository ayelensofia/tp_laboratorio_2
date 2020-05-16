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
            modifyEmployee(listEmployee,EMPLOYEE,id);

            break;
        case 3:
            removeEmployee(listEmployee,EMPLOYEE,id);
            break;
        case 4:
            printf("1.Listado de los empleados ordenados alfabeticamente por apellido y sector\n");
            printf("2.Total y promedio de los salarios, y cuantos empleados superan el salario promedio\n");
            opcion=getint("elija opcion","reingrese opcion",1,2);
            switch(opcion)
            {
               case 1:
                    printEmployeeSort(listEmployee,EMPLOYEE);

                    break;
               case 2:

                   break;
            }

            break;

        }


    }while(opcion!=5);
}
