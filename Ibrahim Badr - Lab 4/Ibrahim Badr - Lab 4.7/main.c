#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 7)C Program to Find the Length of a String without Using strlen()
    char cont;
    do
    {
        cont = 0;

        char str1[50]= {0};
        int i=0;
        int length=0;
        printf("Enter the string to check its length\n");
        scanf ("%s",str1);
        for (i=0; str1[i]!= '\0'; i++)
        {}
        printf("the length of this string is %d\n",i);
        printf("Press c to continue or any other key to exit\n");
        cont = getche();
        printf ("\n");
    }
    while ('c' == cont || 'C' == cont);

    return 0;
}
