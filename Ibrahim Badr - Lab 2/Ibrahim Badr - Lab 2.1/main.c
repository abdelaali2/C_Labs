#include <stdio.h>
#include <stdlib.h>

int main()
{
    //1- Write a C program to check whether a given number is positive or negative or zero
    int num;
    printf ("Enter the Number \n");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("This Number is Positive \n");
    }
    else if (num < 0)
    {
        printf("This Number is Negative \n");
    }
    else
    {
        printf("This Number is Zero \n");
    }
    return 0;
}
