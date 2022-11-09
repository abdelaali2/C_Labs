// Line Editor


#include "mylibrary.h"


int main()
{
    char in[size];
    int i;
    int index=0;
    int exit=0;
    int filled=0;
    for (i=0; i<size; i++)
    {
        in[i]=' ';
    }
    in[size]='\0';
    clrscr();
    //gotoxy (2,20);
    clrscr();
    textattr (95);
    SetColor(15);
    gotoxy (40,8);
    printf("%s",in);
    do
    {
        /*
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
        */
        gotoxy (40+2*index,8);
        for (i=0; i<size; i++)
        {
            if(75==getche())
            {
                index--;
                gotoxy (40+2*index,8);
            }
            else if(8==getche())
            {
                //in[i]=getche();
                //del();
                index--;
                filled++;
            }

        }
    }
    while (0==exit);

    return 0;
}
