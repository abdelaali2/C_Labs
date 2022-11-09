#include <stdio.h>
#include <stdlib.h>

int main()
{
    //5)C Program to Find the Frequency of Characters in a String
    char inp[50];
    char chk;
    int freq;
    int i;
    printf ("Enter the sentence\n");
    scanf ("%s",inp);
    printf ("Enter the Letter you want to check\n");
    chk = getche();
    printf("\n");
    for (i=0;i<50;i++)
    {
        if (inp[i] == chk)
        {
            freq++;
        }
    }
    printf ("The letter(%c) is repeated %d times\n",chk,freq);
    return 0;
}
