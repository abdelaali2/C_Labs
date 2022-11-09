#include <stdio.h>
#include <stdlib.h>

int main()
{
    //5-Write a program to make a simple calculator using switch-case.
    //  The calculator takes the operation (+ or – or * or /) and takes the two input arguments and print the results
    int num1;
    int num2;
    char oper=0;
    int sum;
    int sub;
    int mul;
    float div;

    printf ("Enter the first Number \n");
    scanf("%d", &num1);
    printf ("Enter the second Number \n");
    scanf("%d", &num2);
    printf("Enter the symbol of the operation you want to execute from (+ or - or * or /)\n");
    oper=getchar ();
    scanf("%c", &oper);
    switch (oper)
    {

    case '+':
    sum = num1 + num2;
    printf ("The summation of the numbers you entered (%d, %d) is %d",num1,num2,sum);
    break;

    case '-':
    sub = num1 - num2;
    printf ("The subtraction of the numbers you entered (%d, %d) is %d",num1,num2,sub);
    break;

    case '*':
    mul = num1 * num2;
    printf ("The multiplication of the numbers you entered (%d, %d) is %d",num1,num2,mul);
    break;

    case '/':
    div = (float) num1 / num2;
    printf ("The divition of the numbers you entered (%d, %d) is %d",num1,num2,div);
    break;
    }
    return 0;
}
