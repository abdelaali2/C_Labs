#include <stdio.h>
#include <stdlib.h>
int bigger (int,int,int);
int x=0;
int y=0;
int z=0;

int main()
{
    //4- Write a function takes 3 numbers as parameter, and returns the largest one among them... write a program to test it.
    int num1;
    int num2;
    int num3;
    printf ("Enter the first No.\n");
    scanf ("%d",&num1);
    printf ("Enter the second No.\n");
    scanf ("%d",&num2);
    printf ("Enter the third No.\n");
    scanf ("%d",&num3);
    int max = bigger (num1,num2,num3);
    printf (" The largest No. is %d", max);
    return 0;
}



int bigger (x,y,z)
{
    int largest;
    if (x > y && x>z)
    {
        largest = x;
    }
    else if (y>x && y>z)
    {
        largest = y;
    }
    else if (z>x && z>y)
    {
        largest = z;
    }
    return largest;
}
