#include "emp_men.h"
#include <windows.h>
/*
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);

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
*/
