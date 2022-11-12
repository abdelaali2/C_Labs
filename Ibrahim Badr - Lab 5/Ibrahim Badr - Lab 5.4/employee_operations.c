#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include<windows.h>
#include <time.h>
#include "emp_men.h"


void addemp (Emp_Struct *add, int *pt)
{
    system("cls");
    SetColor (2);
    printf("Enter the Employee No.(%d) ID\n",*pt+1);
    scanf ("%d", &add->id);
    printf("Enter the Employee No.(%d) Name\n",*pt+1);
    fflush(stdin);
    fgets (add->name,15,stdin);
    printf("Enter the Employee No.(%d) salary\n",*pt+1);
    scanf ("%d", &add->salary);
    printf("Enter the Employee No.(%d) bonus\n",*pt+1);
    scanf ("%d", &add->bonus);
    printf("Enter the Employee No.(%d) deduction\n",*pt+1);
    scanf ("%d", &add->deduction);
    add->net = add->salary + add->bonus - add->deduction;
    (*pt)++;
    fflush (stdin);
    SetColor (15);
}

void display(Emp_Struct *dis,int i)
{
    system ("cls");
    SetColor (3);
    printf("\tEmployee (%d):\n",i+1);
    printf ("Employee ID: %d\nEmployee Name: %sEmployee Net salary: %d\n",dis->id,dis->name,dis->net);
}
