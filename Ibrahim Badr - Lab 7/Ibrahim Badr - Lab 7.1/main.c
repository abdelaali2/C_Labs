// Line Editor


#include "mylibrary.h"


int main()
{
    char in [size+1] = {0};
    char x;
    int i=0,p=0,moved=0;
    int num=0;
    int exit=0;
    for (p=0; p<size; p++) // this will determine the area in which the user will type.
    {
        in[p]=' ';
    }
    in[size+1]='\0';//adding the terminator
    clrscr();
    textattr (22);
    SetColor(15);
    gotoxy (20,8);
    printf("%s",in);
    do
    {
        textattr (22);
        SetColor(15);
        gotoxy (20+i,8);
        x=getch();
        if (-32==x)
        {
            x=getch();
            ext_nav(&x,&i);
        }
        else if(13==x)
        {
            exit=1;
            in[moved]='\0';
        }
        else if (8==x)
        {
            if (0<i && size>=i /*&& i<num*/)
            {
                //back_space(&in[i],&i,&num);
                //p=i;
                putch('\b');
                putch(' ');
                i--;
                in[i]=putch('\b');
                num--;
                /*for ()
                {

                }*/
            }
            else if (0==i)
            {
                in[i]=putch(' ');

            }


        }
        else
        {
            if(0<=i && size>=i && -32!=i)
            {
                in[i]=x;
                printf("%c",in[i]);
                i++;
                num++;
                moved++;

            }
        }
        textattr (1);
        SetColor(15);
        gotoxy (60,18);
        printf("No. of char =%d\t%d\t%d\n",num,i,moved);
    }
    while (0==exit);
    textattr (255);
    SetColor(245);
    for (p=0; '\0'!=in[p]; p++)
    {
        gotoxy (20+p,15);
        printf("%c",in[p]);
    }
    printf ("\n\n\n\n");
    textattr (1);
    SetColor(15);

    return 0;
}
