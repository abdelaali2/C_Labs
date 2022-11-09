#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2- Write a C program to check whether a given number is even or odd
    int num;
    printf ("Enter the Number \n");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
    printf ("This Number is even\n");

    }
    else if (num % 2 == 1)
    {
    printf ("This Number is odd\n");

    }
    return 0;
}
