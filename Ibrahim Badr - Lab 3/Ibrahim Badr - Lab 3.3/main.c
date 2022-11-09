#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds);
}

int main()
{
    //3- Magic Box.
    int row;
    int col;
    int i=1;
    int size;
    int flag=0;
    do
    {
        printf ("Enter the Size of the magic box\n");
        scanf ("%d", &size);
        if (size % 2 == 0)
        {
            flag=1;
            printf("This is an Even No., enter an Odd No.\n\n");
        }
        else
        {
            flag=0;
            row=1;
            col=(size+1)/2;// to go the middle col
            system("cls");
            int max = size*size;
            for(i=1; i<=max; i++)  // start at i=1 then condition <=
                                   // start at i=0 condition <
            {
                gotoxy(col*5,row);
                printf ("%5d",i);
                if (i%size==0)
                {
                    row ++;
                }
                else
                {
                    row--;
                    col--;
                    if (col == 0)
                    {
                        col =size;
                    }
                    if (row == 0)
                    {
                        row =size;
                    }
                    printf ("\n");
                }
                delay (1);
            }
        }
        printf ("\n\n");
    }

    while (flag==1);
    return 0;
}
