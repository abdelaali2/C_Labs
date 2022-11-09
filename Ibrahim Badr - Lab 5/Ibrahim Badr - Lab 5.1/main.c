//1- C Program to take single Employee's information(ID, Name, Salary, Bonus, Deduction)
// ,and display his code, name along with his net salary. (Emp_Struct)


#include <stdio.h>
#include <stdlib.h>


typedef struct Employee
{
    char name[15];
    int id;
    int salary;
    int bonus;
    int deduction;
    int net
} Emp_Struct;
int main()
{
    Emp_Struct emp1;
    printf("Enter the Employee's ID\n");
    scanf ("%d", &emp1.id);
    printf("Enter the Employee's Name\n");
    fflush(stdin);
    fgets (emp1.name,15,stdin);
    printf("Enter the Employee's salary\n");
    scanf ("%d", &emp1.salary);
    printf("Enter the Employee's bonus\n");
    scanf ("%d", &emp1.bonus);
    printf("Enter the Employee's deduction\n");
    scanf ("%d", &emp1.deduction);
    emp1.net = emp1.salary + emp1.bonus - emp1.deduction;
    printf ("Employee ID: %d\nEmployee Name: %s\nEmployee Net salary: %d\n",emp1.id,emp1.name,emp1.net);
    return 0;
}
