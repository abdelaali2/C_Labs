#include <stdio.h>
#include <stdlib.h>

int main()
{
    //8) C Program to Remove all Characters in a String Except Alphabet
    char cont;
    do
    {
        cont=0;
        char inp[100]= {0};
        int last=0;
        int i=0;
        int chk=0;
        printf("Enter the alphanumeric string\n");
        do
        {
            inp[i]=getchar();
            if (('A'<=inp[i] && 'Z'>=inp[i]) || ('a'<=inp[i] && 'z'>=inp[i]))
            {
                i++;
            }
            else if (inp[i]=='\n')
            {
                chk = 1;
            }
        }
        while (chk==0);
        printf ("Here's your string after moving the unwanted characters from it\n%s\n",inp);
        printf ("Press c to continue or any other key to exit\n");
        cont = getche();
        printf ("\n");
    }
    while ('c' == cont || 'C' == cont);
    return 0;
}
