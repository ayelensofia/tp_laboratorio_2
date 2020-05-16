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

/** \brief inicializa la bandera (isEmpty)en verdadero a todas las posiciones del array
 *
 * \param employeeList[] Employee array de empleados
 * \param int tamaño del array de empleados
 * \return int devuelve -1, error sino 0, ok.
 *
 */
int initEmployee(Employee employeeList[],int);
/** \brief buscar indice libre
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño empleados
 * \return int devuelve -1 sino encontro indice sino el indice encontrado
 *
 */
int searchFree(Employee employeeList[],int len);
/** \brief agrega un array de empleados existente
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño empleados
 * \param id int el id del empleado
 * \param name[] char nombre del empleado
 * \param lastaname[] char apellido del empleado
 * \param float  salario del empleado
 * \param sector int  sector del empleado
 * \param accountant int contador de id de empleados
 * \return int devuelve -1 sino encontro indice sino el indice encontrado
 *
 */
int addEmployee(Employee employeeList[],int len,int id,char name[],char lastaname[],float,int sector,int accountant);
/** \brief muestra un empleado
 *
 * \param employeeList Employee un empleado
 * \return int devuelve -1 si hubo error sino 0 si todo ok.
 *
 *
 */
int printEmployees(Employee employeeList);
/** \brief muestra lista de empleados
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño de empleados
 * \return int devuelve -1 si hubo error sino 0 si todo ok.
 *
 */
int printEmployeesList(Employee employeeList[],int len);
/** \brief busca un empleado recibiendo como parametro de busqueda su id
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño empleados
 * \param id int el id del empleado
 * \return int devuelve -1 si hubo error o no encontro al empleado sino todo ok, devuelve el id encontrado.
 *
 */
int findEmployeeById(Employee employeeList[],int len,int id);

/** \brief modifica datos del empleado
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño del array de empleados
 * \param id int id del empleado
 * \return int -1 si hubo error sino 0, todo ok
 *
 */
int modifyEmployee(Employee employeeList[],int len,int id);
/** \brief elimina empleado
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño del array
 * \param id int id del empleado
 * \return int -1 si hubo error sino 0, todo ok
 *
 */
int removeEmployee(Employee employeeList[],int len,int id);

/** \brief ordena de manera ascendente los apellidos y sector de los empleados
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño del array de empleados
 * \return int -1 si hubo error sino 0, todo ok
 *
 */
int sortEmployeeAsc(Employee employeeList[],int len);

/** \brief muestra la lista de empleados ordenada de forma ascendente o descendente
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño de empleados
 * \return int -1 si hubo error sino 0, todo ok
 *
 */
int printEmployeeSort(Employee employeeList[],int len);

/** \brief ordena de manera descendente los apellidos y sector de los empleados
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño de empleados
 * \return int -1 si hubo error sino 0, todo ok
 *
 */
int sortEmployeeDes(Employee employeeList[],int len);

/** \brief calcula el total de salarios de los empleados
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño el array de empleados
 * \return float total de salarios
 *
 */
float salaryEmpployee(Employee employeeList[],int len);
/** \brief muestra el total de los salarios de los empleados
 *
 * \param employeeList[] Employee array de empleados
 * \param len int tamaño de empleados
 * \return int -1 si hubo error sino 0, todo ok
 *
 */
int printListSalaryTotal(Employee employeeList[],int len);

/** \brief calcula el promedio de los salarios
 *
 * \param listEmployee[] Employee array de empleados
 * \param len int tamaño del array de empleados
 * \param accountantEmployee int contador de empleados
 * \return float devuelve el promedio de los salarios
 *
 */
float SalaryPromedy(Employee listEmployee[],int len,int accountantEmployee);

/** \brief muestra el promedio de los salarios de los empleados
 *
 * \param listEmployee[] Employee array de empleados
 * \param len int tamaño del array de empleados
 * \param accountantEmployee int contador de empleados
 * \return int -1 si hubo error sino 0, todo ok
 *
 */
int printListSalaryPromedy(Employee listEmployee[],int len, int accountantEmployee);

/** \brief calcula la cantidad de empleados que superaron el salario promedio
 *
 * \param listEmployee[] Employee array de empleados
 * \param len int tamaño de empleados
 * \param accountantEmployee int contador de empleados
 * \return int devuelve la cantidad de empleados que superaron el salario promedio
 *
 */
int employeeExceedsSalaryAverage(Employee listEmployee[],int len,int accountantEmployee);

/** \brief muestra la cantidad de empleados que superaron el salario promedio
 *
 * \param listEmployee[] Employee  array de empleados
 * \param len int tamaño de empleados
 * \param accountantEmployee int contador de empleados
 * \return int -1 si hubo error sino 0, todo ok
 *
 */
int printEmployeeExceedsSalaryAverage(Employee listEmployee[],int len,int accountantEmployee);
