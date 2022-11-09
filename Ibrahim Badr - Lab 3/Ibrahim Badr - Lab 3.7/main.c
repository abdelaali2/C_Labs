#include <stdio.h>
#include <stdlib.h>

int cubed (int);

int main()
{
    // 7-Write a C Function that prints the cube of any number.
    int x;
    printf ("Enter the No.\n");
    scanf ("%d",&x);
    int cu = cubed (x);
    printf ("The No. you entered is (%d) and its cube is\n%d",x,cu);
    return 0;
}


int cubed (int x)
{
   int result=0;
   result = x*x*x;
   return result;
}
