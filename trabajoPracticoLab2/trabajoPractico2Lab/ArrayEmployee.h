#include <stdio.h>
#define OCUPADO 1
#define LIBRE 0
#include "funcionesPractica.h"
struct
{
    int id;
    char name[51];
    char lastname[51];
    float salary;
    int sector;
    int isEmpty;

}typedef Employee;
int initEmployee(Employee employeeList[],int);
int searchFree(Employee employeeList[],int len);
int addEmployee(Employee employeeList[],int len,int id,char name[],char lastaname[],float,int sector,int accountant);
void printEmployees(Employee employeeList);
void printEmployeesList(Employee employeeList[],int len);
int findEmployeeById(Employee employeeList[],int len,int id);
int modifyEmployee(Employee employeeList[],int len,int id);
int removeEmployee(Employee employeeList[],int len,int id);
int sortEmployeeAsc(Employee employeeList[],int len);
int printEmployeeSort(Employee employeeList[],int len);
