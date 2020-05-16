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



        employeeList[index].id=id;
        strcpy(employeeList[index].name,name);
        strcpy(employeeList[index].lastname,lastname);
        employeeList[index].salary=salary;
        employeeList[index].sector=sector;
        employeeList[index].isEmpty=OCUPADO;


    }

    return index;

}
int printEmployees(Employee aEmployee)
{
    int errorValue=-1;
        printf("ID:\tNAME:\tLASTNAME:\tSALARY:\tSECTOR:\n ");
        printf("%d%11s%11s%15.2f%4d\n",aEmployee.id,
                                    aEmployee.name,
                                    aEmployee.lastname,
                                    aEmployee.salary,
                                    aEmployee.sector);

        errorValue=0;

        return errorValue;

}
int printEmployeesList(Employee employeeList[],int len)
{
    int i;
    int errorValue=-1;

         for(i=0;i<len;i++)
        {
          if(employeeList[i].isEmpty==OCUPADO)
            {
                printEmployees(employeeList[i]);
                errorValue=0;

            }
        }
    return errorValue;

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
                getstring("ingrese nombre nuevo: ",nombreAux,51);
                getstring("realizar modificacion?: ",respuestaUsuario,3);
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
                getstring("ingrese apellido nuevo: ",apellidoAux,51);
                getstring("realizar modificacion?: ",respuestaUsuario,3);
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
                 salarioAux=getfloat("ingrese salario desde 30000 hasta 100000: ","reingrese salario: ",30000,100000);
                getstring("¿realizar modificacion?: ",respuestaUsuario,3);
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
                    sectorAux=getint("ingrese sector nuevo: ","reingrese sector: ",1,20);
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
int removeEmployee(Employee employeeList[],int len,int id)
{
    int retorno=-1;
    int i;
    char respuesta[3];
    char respuestaUsuario[3];
    strcpy(respuesta,"no");
    int index=-1;
    printEmployeesList(employeeList,len);
    id=getint("Ingrese id a eliminar de 1 a 1000: ","reingrese id: ",1,1000);
    index=findEmployeeById(employeeList,len,id);
    if(index!=-1)
    {
        for(i=0;i<len;i++)
         {
            if(employeeList[i].isEmpty==OCUPADO && employeeList[i].id==id)
            {
                printf("Se elimara a:\n");
                printEmployees(employeeList[i]);
                getstring("¿realizar eliminacion?: ",respuestaUsuario,3);
                if(strcmp(respuestaUsuario,respuesta)>0)
                {
                     printf("elimacion completa\n");
                    employeeList[i].isEmpty=LIBRE;
                    retorno=0;


                }else
                    {

                        printf("eliminacion cancelada\n");

                    }
            }
         }

    }


        return retorno;
}
int sortEmployeeAsc(Employee employeeList[],int len)
{
    int i;
    int j;
    int errorValue=-1;
    Employee auxEmployee;
    for(i=0;i<len-1;i++)
    {
        if(employeeList[i].isEmpty!=OCUPADO)
        {
            continue;
        }
        for(j=i+1;j<len;j++)
        {
             if(employeeList[j].isEmpty!=OCUPADO)
            {
                continue;
            }
            if(strcmp(employeeList[i].lastname,employeeList[j].lastname)>0)
            {
                    auxEmployee=employeeList[i];
                    employeeList[i]=employeeList[j];
                    employeeList[j]=auxEmployee;

                    errorValue=0;
            }else
                {
                    if(strcmp(employeeList[i].lastname,employeeList[j].lastname)==0)
                    {
                        if(employeeList[i].sector>employeeList[j].sector)
                        {
                            auxEmployee=employeeList[i];
                            employeeList[i]=employeeList[j];
                            employeeList[j]=auxEmployee;
                            errorValue=0;
                            errorValue=0;

                        }
                    }
                }
        }
    }
    return errorValue;
}
int printEmployeeSort(Employee employeeList[],int len)

{
    int opcion;
    int errorValue=-1;
    printf("0.mostrar empleados ordenados de forma ascendente:\n ");
    printf("1.mostrar empleados de forma descendente:\n ");
    opcion=getint("elija opcion:  ","ingrese opcion valida: ",0,1);
    switch(opcion)
    {
    case 0:

            sortEmployeeAsc(employeeList,len);
            printEmployeesList(employeeList,len);
            errorValue=0;
        break;
    case 1:
            sortEmployeeDes(employeeList,len);
            printEmployeesList(employeeList,len);
            errorValue=0;
        break;

    }


    return errorValue;
}
int sortEmployeeDes(Employee employeeList[],int len)
{
    int i;
    int j;
    int errorValue=-1;
    Employee auxEmployee;
    for(i=0;i<len-1;i++)
    {
        if(employeeList[i].isEmpty!=OCUPADO)
        {
            continue;
        }
        for(j=i+1;j<len;j++)
        {
             if(employeeList[j].isEmpty!=OCUPADO)
            {
                continue;
            }
            if(strcmp(employeeList[i].lastname,employeeList[j].lastname)<0)
            {
                    auxEmployee=employeeList[i];
                    employeeList[i]=employeeList[j];
                    employeeList[j]=auxEmployee;

                    errorValue=0;
            }else
                {
                    if(strcmp(employeeList[i].lastname,employeeList[j].lastname)==0)
                    {
                        if(employeeList[i].sector<employeeList[j].sector)
                        {
                            auxEmployee=employeeList[i];
                            employeeList[i]=employeeList[j];
                            employeeList[j]=auxEmployee;
                            errorValue=0;
                            errorValue=0;

                        }
                    }
                }
        }
    }
    return errorValue;

}
float salaryEmpployee(Employee employeeList[],int len)
{
    int i;
    float salaryAccumulator=0;
    int accountantSalary=0;
    for(i=0;i<len;i++)
    {
        if(employeeList[i].isEmpty==OCUPADO)
        {
            salaryAccumulator=employeeList[i].salary+salaryAccumulator;
            accountantSalary++;

        }
    }

    return salaryAccumulator;
}
int printListSalaryTotal(Employee employeeList[],int len)
{
    int errorValue=-1;
    float total;
    total=salaryEmpployee(employeeList,len);


    printf("El total de salarios es:%.2f\n ",total);

    errorValue=0;


    return errorValue;
}
float SalaryPromedy(Employee listEmployee[],int len,int accountantEmployee)
{
    float salaryAcumulator;
    float salaryPromedy=0;
    salaryAcumulator=salaryEmpployee(listEmployee, len);
    salaryPromedy = salaryAcumulator/accountantEmployee;


    return salaryPromedy;

}
int printListSalaryPromedy(Employee listEmployee[],int len, int accountantEmployee)
{
    int errorValue=-1;
    float promedy;

    promedy=SalaryPromedy(listEmployee,len,accountantEmployee);
            printf("El promedio de salarios es:%.2f\n ",promedy);
                errorValue=0;



    return errorValue;
}
int employeeExceedsSalaryAverage(Employee listEmployee[],int len,int accountantEmployee)
{
    int i;
    int averageSalary;
    int accountantHigherSalary=0;
    averageSalary=SalaryPromedy(listEmployee,len,accountantEmployee);
    for(i=0;i<len;i++)
    {
        if(listEmployee[i].isEmpty==OCUPADO)
        {
            if(listEmployee[i].salary>averageSalary)
            {
                accountantHigherSalary++;

            }
        }
    }
    return accountantHigherSalary;

}
int printEmployeeExceedsSalaryAverage(Employee listEmployee[],int len,int accountantEmployee)
{
    int errorValue=-1;

    int quantityEmployeeExceedsSalaryAverage;
    quantityEmployeeExceedsSalaryAverage=employeeExceedsSalaryAverage(listEmployee,len,accountantEmployee);

                printf("La cantidad es:%d\n ",quantityEmployeeExceedsSalaryAverage);
                errorValue=0;




                errorValue=0;
    return errorValue;
}
