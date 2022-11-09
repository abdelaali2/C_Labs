#include <stdio.h>
#include <stdlib.h>

int main()
{
    //3) C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.
    printf ("Enter the Char\n");
    char ch = getch();
    if (ch == -32)
    {
        printf ("Extended Key : ");
        ch = getch();
        printf ("%d\n",ch);
    }
    else
    {
        printf ("Normal Key : ");
        printf ("%d\n",ch);
    }
    return 0;
}
