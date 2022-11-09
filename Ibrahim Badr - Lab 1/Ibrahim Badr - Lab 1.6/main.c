#include <stdio.h>
#include <stdlib.h>

int main()
{
    //6 - C Program to make simple calculations (add, sub, multiply, divid) on two integers
    int x;
    int y;
    int sum;
    int sub;
    int mul;
    float div;
    printf("Enter the first No. \n");
    scanf ("%d", &x);
    printf("Enter the second No. \n");
    scanf ("%d", &y);
    sum = x+y;
    sub = x-y;
    mul = x*y;
    div = (float) x/y;
    printf ("The Sum is %d \n",sum);
    printf ("The Subtraction is %d \n",sub);
    printf ("The Multiplication is %d \n", mul);
    printf ("The Division is %f \n", div);
    return 0;
}
