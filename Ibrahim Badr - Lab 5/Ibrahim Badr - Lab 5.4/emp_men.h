
#ifndef  x
#define X

#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include <windows.h>
#include <time.h>
//#define size 100

void gotoxy(int,int);
void SetColor(int);
void layout1 (void);
void layout2 (void);
void layout3 (void);

typedef struct Employee
{
    int id;//4bytes
    int salary;//4bytes
    int bonus;//4bytes
    int deduction;//4bytes
    int net;//4bytes
    char name[15];//15*1=15bytes
} Emp_Struct;


void display(Emp_Struct *,int );
void addemp (Emp_Struct *, int *);

#endif // x
