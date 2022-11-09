/*
2. Employee with Dynamic Allocation and Highlight Menu (allow the user to specify the size of array at runtime).
*/
#include "emp_men.h"
#include <windows.h>

int main()
{

    int size=2;
    int i=0;
    int filled=0;
    int *co=&filled;
    int c[23];
    printf ("Enter the No. of Employees you want to store\n");
    scanf ("%d",&size);
   // Emp * employee [100];
     Emp ** employee;
    // = (Emp *) malloc (size * sizeof(Emp));
    for (i=0;i<size;i++)
    {
        employee [i]= (Emp *) malloc (sizeof(Emp));
        addemp (employee [i],co);
        /*printf ("Enter Employee No.(%d) ID: ",i+1);
        scanf ("%d",&employee -> id);
        printf ("Enter Employee No.(%d) Name: ",i+1);
        scanf ("%s",employee -> name);
        printf ("Enter Employee No.(%d) salary: ",i+1);
        scanf ("%d",&employee -> salary);*/
    }
    for (i=0;i<size;i++)
    {
        //employee [i]= (Emp *) malloc (size * sizeof(Emp));
        display (employee [i],i);
    }

    return 0;
}
