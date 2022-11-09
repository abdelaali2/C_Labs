#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2) Receive character by character and then place the string terminator upon pressing enter, then display the string.
    char chk;
    char in[100]={0};
    do
    {
        printf("Enter the string \n");
        int i=0;
        chk = 0;
        do
        {
            in[i]= getchar();
            if (in[i] != '\n')
            {
                i++;
            }

        }
        while (in[i] != '\n');
        in[i] = '\0';
        printf ("%s\n",in);
        printf ("Press c to continue or press any other key to exit\n");
        chk = getche();
        printf ("\n");
    }
    while (chk == 'c' || chk == 'C');
    return 0;
}
