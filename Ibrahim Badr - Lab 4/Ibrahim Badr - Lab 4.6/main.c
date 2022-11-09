#include <stdio.h>
#include <stdlib.h>

int main()
{
    //6) C Program to Copy String Without Using strcpy()
    char str1[50] = {0};
    char str2[50] = {0};
    int i;
    char inp;
    char cont;
    do
    {
        cont = 0;
        printf("Enter the string you want to copy\n");
        scanf("%s", str1);
        for(i=0; i<50; i++)
        {
            str2[i]=str1[i];
        }
        do
        {
            inp=0;
            printf("Press Ctrl + V to paste the string\n");
            inp = getch();
            if (22==inp)
            {
                printf ("%s\n",str2);
            }
            else
            {
                printf ("This is not a valid entry\n");

            }
        }
        while (22!=inp);

        printf("Press c to continue or any other key to exit\n");
        cont = getche();
        printf ("\n");
    }
    while ('c' == cont || 'C' == cont);

    return 0;
}
