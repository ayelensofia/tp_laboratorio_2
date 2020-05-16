#include <stdio.h>
#include <stdlib.h>
#include "ArrayEmployee.h"
#define EMPLOYEE 1000

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
                                  printf("***********************************************\n");
                                  printf("\n");
                                  printf("*****************MENU USUARIO******************\n");
                                  printf("\n");
                                  printf("***********************************************\n");

        printf("**1.ALTA\n**2.MODIFICAR\n**3.BAJA\n**4.INFORMES\n**5.SALIR\n");
        opcion=getint("#Elija una opcion: ","#ingrese opcion valida: ",1,5);
        switch(opcion)
        {
        case 1:
            id=generadorId(1,accountantEmployee);
            getstring("ingrese nombre: ",name,51);
            getstring("ingrese apellido: ",lastname,51);
            salary=getfloat("ingrese salario de 30000 hasta 100000: ","reingrese salario: ",30000,100000);
            sector=getint("ingrese sector de 1 a 20: ","ingrese sector valido: ",1,20);
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
            opcion=getint("Elija opcion","reingrese opcion",1,2);
            switch(opcion)
            {
               case 1:
                    printEmployeeSort(listEmployee,EMPLOYEE);

                    break;
               case 2:
                   printf("\n");
                   printf("TOTAL DE SALARIOS:\n ");
                   printListSalaryTotal(listEmployee,EMPLOYEE);
                   printf("/****************************************************************/\n");
                   printf("PROMEDIO DE LOS SALARIOS:\n ");
                   printListSalaryPromedy(listEmployee,EMPLOYEE,accountantEmployee);
                   printf("/*****************************************************************/\n");
                   printf("CANTIDAD DE EMPLEADOS QUE SUPERAN EL PROMEDIO DE LOS SALARIOS:\n");
                   printEmployeeExceedsSalaryAverage(listEmployee,EMPLOYEE,accountantEmployee);
                   break;
            }

            break;

        }
        system("pause");
        system("cls");

    }while(opcion!=5);
}
