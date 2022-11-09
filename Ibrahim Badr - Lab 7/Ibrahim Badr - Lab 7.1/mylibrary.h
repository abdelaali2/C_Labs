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
#define doen 80
#define up 72
#define esc 27
#define home 71
#define en 7
#define enter 13

void SetColor(int ForgC);
void textattr(int ForgC);
void clrscr();
void gotoxy(int x, int y);
void addemp (Emp_Struct *add, int *pt)


#endif // MYLIBRARY
