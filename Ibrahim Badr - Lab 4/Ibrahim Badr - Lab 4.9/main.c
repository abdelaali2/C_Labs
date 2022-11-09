#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include<windows.h>
#include <time.h>
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

void layout1 (void);
void layout2 (void);
void layout3 (void);
void contact (void);
void exp (void);

int main()
{
    //9)Highlight Menu: New Colored Menu "with Arrows"
    char inp;
    char cont;
    int optclr = 100;
    int lay;
    int page;
    int exit=0;
    //do
    //{
    layout1 ();
    lay=1;
    page=0;
    do
    {

        inp = getch();

        if (80==inp && 0==page)
        {
            switch (lay)
            {

            case 1 :
                layout2 ();
                lay=2;
                break;
            case 2 :
                layout3();
                lay=3;
                break;
            case 3 :
                layout1 ();
                lay=1;
                break;
            }
        }
        else if (72==inp && 0==page)
        {
            switch (lay)
            {

            case 1 :
                layout3 ();
                lay=3;
                break;
            case 2 :
                layout1();
                lay=1;
                break;
            case 3 :
                layout2 ();
                lay=2;
                break;
            }
        }
        else if (77==inp && 1==lay)
        {
            switch (page)
            {
            case 0 :
                contact ();
                page=1;
                break;
            case 1:
                layout1 ();
                page=0;
            }
        } else if (77==inp && 2==lay)
        {
            switch (page)
            {
            case 0 :
                exp();
                page =1;
                break;
            case 1:
                layout2 ();
                page=0;
            }
        } else if (75==inp && 1==lay)
        {
            switch (page)
            {
            case 0 :
                contact ();
                page=1;
                break;
            case 1:
                layout1 ();
                page=0;
            }
        } else if (75==inp && 2==lay)
        {
            switch (page)
            {
            case 0 :
                exp();
                page =1;
                break;
            case 1:
                layout2 ();
                page=0;
            }
        } else if (3==lay && (77==inp || 75==inp))
        {
            exit=1;
        }
    }
    while (0==exit);
    return 0;
}

void layout1 (void)
{
    system ("cls");
    SetColor (30);
    gotoxy(40,0);
    printf  ("Welcome to my Electronic Resume\n");
    gotoxy(42,2);
    printf ("Use the arrows to navigate\n");
    SetColor (100);
    gotoxy(47,7);
    printf("Contact Details\n");
    SetColor (15);
    gotoxy(49,12);
    printf("Experience\n");
    gotoxy(52,17);
    printf("Exit\n");
}

void layout2 (void)
{

    system ("cls");
    SetColor (30);
    gotoxy(40,0);
    printf  ("Welcome to my Electronic Resume\n");
    gotoxy(42,2);
    printf ("Use the arrows to navigate\n");
    SetColor (15);
    gotoxy(47,7);
    printf("Contact Details\n");
    SetColor (100);
    gotoxy(49,12);
    printf("Experience\n");
    SetColor (15);
    gotoxy(52,17);
    printf("Exit\n");
}

void layout3 (void)
{

    SetColor (30);
    gotoxy(40,0);
    printf  ("Welcome to my Electronic Resume\n");
    gotoxy(42,2);
    printf ("Use the arrows to navigate\n");
    SetColor (15);
    gotoxy(47,7);
    printf("Contact Details\n");
    gotoxy(49,12);
    printf("Experience\n");
    SetColor (100);
    gotoxy(52,17);
    printf("Exit\n");
    SetColor (15);
}


void contact (void)
{
    system ("cls");
    SetColor (2);
    gotoxy(47,7);
    printf("Name: Ibrahim Badr\n");
    gotoxy(45,12);
    printf("Mobile No.: 01141978069\n");
    gotoxy(43,17);
    printf ("Email: hamedb.ibrahim@gmail.com\n");
}


void exp (void)
{
    system ("cls");
    SetColor (3);
    gotoxy (43,7);
    printf("Current Position:ITI Student\n");
    gotoxy (45,12);
    printf("Start Date:\October 2022.\n");
}
