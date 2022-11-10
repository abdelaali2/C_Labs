// Line Editor


#include "mylibrary.h"


int main()
{
    char in[size];
    int i=0;
    int index=0;
    int exit=0;
    int filled=0;
    for (i=0; i<size; i++)
    {
        in[i]=' ';
    }
    in[size]='\0';
    clrscr();
    clrscr();
    textattr (95);
    SetColor(15);
    gotoxy (40,8);
    printf("%s",in);
    gotoxy (40,8);
    do
    {
        for (i=0; i<size; i++)
        {
            gotoxy (40+i,8);
            in[i]=getch();
            if(left==in[i]&&(0==i))
            {
                //index--;
                gotoxy (40+size,8);
                i=size;
            }
            else if(left==in[i]&&(0!=i))
            {
                i--;
                gotoxy (40+i,8);
            }
            else if(back==in[i])
            {
                //in[i]=getche();
                //del();
                i--;
                //filled++;
            }
            else
            {
                printf("%c",in[i]);
            }

        }
    }
    while (0==exit);

    return 0;
}
