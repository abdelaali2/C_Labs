#include <stdio.h>
#include <stdlib.h>

int main()
{
    //7- C Program to compute Quotient and Remainder
    int x;
    int y;
    int quotient;
    int remainder;
    printf("Enter the first No. \n");
    scanf ("%d", &x);
    printf("Enter the second No. \n");
    scanf ("%d", &y);
    quotient =  x/y;
    remainder = x%y;
    printf ("The Quotient is %d \n",quotient);
    printf ("The Remainder is %d \n",remainder);
    return 0;
}
