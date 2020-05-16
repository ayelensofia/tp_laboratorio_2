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

/** \brief
 *
 * \param employeeList[] Employee
 * \param int
 * \return int
 *
 */
int initEmployee(Employee employeeList[],int);
int searchFree(Employee employeeList[],int len);
int addEmployee(Employee employeeList[],int len,int id,char name[],char lastaname[],float,int sector,int accountant,float totalSalary);
int printEmployees(Employee employeeList);
int printEmployeesList(Employee employeeList[],int len);
int findEmployeeById(Employee employeeList[],int len,int id);
int modifyEmployee(Employee employeeList[],int len,int id);
int removeEmployee(Employee employeeList[],int len,int id);
int sortEmployeeAsc(Employee employeeList[],int len);
int printEmployeeSort(Employee employeeList[],int len);
int sortEmployeeDes(Employee employeeList[],int len);
float salaryEmpployee(Employee employeeList[],int len);
int printListSalaryTotal(Employee employeeList[],int len);
float SalaryPromedy(Employee listEmployee[],int len,int accountantEmployee);
int printListSalaryPromedy(Employee listEmployee[],int len, int accountantEmployee);
int employeeExceedsSalaryAverage(Employee listEmployee[],int len,int accountantEmployee);
int printEmployeeExceedsSalaryAverage(Employee listEmployee[],int len,int accountantEmployee);
