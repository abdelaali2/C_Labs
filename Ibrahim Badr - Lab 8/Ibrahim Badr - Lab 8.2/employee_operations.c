#include "emp_men.h"

void SetColor(int ForgC)
{
    WORD wColor;

    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void addemp (Emp *add, int *pt)
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
    SetColor (15);
}

void display(Emp *dis,int i)
{
    //system ("cls");
    SetColor (3);
    printf("\tEmployee (%d):\n",i+1);
    printf ("Employee ID: %d\nEmployee Name: %sEmployee Net salary: %d\n",dis->id,dis->name,dis->net);
}
