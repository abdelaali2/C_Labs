#include <stdio.h>
#include <stdlib.h>

int main()
{
    //9- C Program to count number of Alphabets & number of words in a sentence. (word count)
    int letter= 0;
    int words= 0;
    char in;
    int chk =0;
    printf ("Type the sentence then press Enter:\n");
    while (in != '\n')
    {
        in =getchar();

        if ((in >= 'A' && in <= 'Z')||(in >= 'a' && in <= 'z'))
        {
            letter++;
            chk = 1;
        }
        else if (in == ' ' && chk == 1)
        {
            words++;
            chk =0;
        }
        else if (in == '\n' && chk == 1 )
        {
         words ++;
        }
    }
    printf ("Words Counter = %d \t Letters Counter = %d\n",words,letter);
    return 0;
}
