#include "head.h"


void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
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

int layout0 (void)
{
    int a;
    system ("cls");
    SetColor (30);
    printf ("Enter the total No. of Employees\n");
    scanf ("%d",&a);
    SetColor (15);
    return a;
}

void layout1 (void)
{
    system ("cls");
    SetColor (30);
    printf ("Use the arrows to navigate\nYou can enter up to 100 Employees in this program\n");
    SetColor (100);
    gotoxy(50,7);
    printf("New Employee\n");
    SetColor (15);
    gotoxy(44,12);
    printf("Display current Employees\n");
    gotoxy(53,17);
    printf("Exit\n");
}

void layout2 (void)
{

    system ("cls");
    SetColor (30);
    printf ("Use the arrows to navigate\nYou can enter up to 100 Employees in this program\n");
    SetColor (15);
    gotoxy(50,7);
    printf("New Employee\n");
    SetColor (100);
    gotoxy(44,12);
    printf("Display current Employees\n");
    SetColor (15);
    gotoxy(53,17);
    printf("Exit\n");
}

void layout3 (void)
{

    system ("cls");
    SetColor (30);
    printf ("Use the arrows to navigate\nYou can enter up to 100 Employees in this program\n");
    SetColor (15);
    gotoxy(50,7);
    printf("New Employee\n");
    gotoxy(44,12);
    printf("Display current Employees\n");
    SetColor (100);
    gotoxy(53,17);
    printf("Exit\n");
    SetColor (15);
}

Emp_Struct* addemp (int *pt,int *x)
{
    Emp_Struct *in = (Emp_Struct *) malloc((*pt)*sizeof(int));
    SetColor (2);
    printf("Enter the Employee No.(%d) ID\n",*x+1);
    scanf ("%d", &in->id);
    printf("Enter the Employee No.(%d) Name\n",*x+1);
    fflush(stdin);
    fgets (in->name,15,stdin);
    printf("Enter the Employee No.(%d) salary\n",*x+1);
    scanf ("%d", &in->salary);
    printf("Enter the Employee No.(%d) bonus\n",*x+1);
    scanf ("%d", &in->bonus);
    printf("Enter the Employee No.(%d) deduction\n",*x+1);
    scanf ("%d", &in->deduction);
    in->net = in->salary + in->bonus - in->deduction;
    (*x)++;
    SetColor (15);
    printf ("bef:  %d\n",(*(in+0)).id);
    return in;
}

void display(Emp_Struct *dis, int *j)
{
    int i;
    system ("cls");
    SetColor (3);
    for (i=0; i<(*j); i++)
    {
        printf("\tEmployee (%d):\n",i+1);
        printf ("Employee ID: %d\nEmployee Name: %sEmployee Net salary: %d\n",dis->id,dis->name,dis->net);
    }
}
