#include <stdio.h>
#include <stdlib.h>
void alpha (char);
int main()
{
    //5- Write a C Function that takes one character and checks if it alphabet or not.
    char inp;
    printf ("Enter the Character you want to check\n");
    inp=getchar();
    printf("%d",inp);
    alpha(inp);
    return 0;
}



void alpha (char x)
{
    if ((x >= 'A' && x <='Z') || (x >= 'a' && x <= 'z'))
    {
        printf ("Your entry is in the Alphabet\n");
    }
    else
    {
        printf ("Your entry is NOT in the Alphabet");
    }
}
