#ifndef MYLIBRARY
#define MYLIBRARY
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>

#define size 50
#define left 75
#define right 77
#define down 80
#define up 72
#define esc 27
#define home 71
#define enter 13
#define en 7
#define back 8

typedef struct Employee
{
    int id;//4bytes
    int salary;//4bytes
    int bonus;//4bytes
    int deduction;//4bytes
    int net;//4bytes
    char name[15];//15*1=15bytes
} Emp_Struct;

void SetColor(int ForgC);
void textattr(int ForgC);
void clrscr();
void gotoxy(int x, int y);
void addemp (Emp_Struct *add, int *pt);


#endif // MYLIBRARY
