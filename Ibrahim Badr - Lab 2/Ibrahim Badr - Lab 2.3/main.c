#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3- C Program to Find the Largest Number Among Three Numbers
    int num1;
    int num2;
    int num3;
    printf ("Enter the first Number \n");
    scanf("%d", &num1);
    printf ("Enter the second Number \n");
    scanf("%d", &num2);
    printf ("Enter the third Number \n");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num2)
    {
        printf ("The first number you entered(%d) is the Largest Number\n", num1);
    }
    else if (num2 > num1 && num2 > num3)
    {
        printf ("The second number you entered(%d) is the Largest Number\n", num2);
    }
    else if (num3 >  num1 && num3 > num2)
    {
        printf ("The third number you entered (%d) is the Largest Number\n", num3);

    }
    return 0;
}
