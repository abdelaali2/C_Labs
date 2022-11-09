#include <stdio.h>
#include <stdlib.h>

int main()
{
    //  1- Receive numbers from the user, and exit when the sum exceeds 100.
    int num=0;
    int sum=0;
    while (sum <= 100)
    {
        printf("Enter the No.\n");
        scanf ("%d",&num);
        sum += num;
        printf ("The summation is %d\n",sum);
    }
    return 0;
}
