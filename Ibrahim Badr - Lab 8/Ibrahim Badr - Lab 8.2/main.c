//2. Employee with Dynamic Allocation and Highlight Menu (allow the user to specify the size of array at runtime).

#include "head.h"

int main()
{
    char inp;
    int chk;
    int lay;
    int exit=0;
    int filled=0;
    int page=0;
    int j=0;
    int size = layout0();
    Emp_Struct *emp;
    layout1 ();
    lay=1;
    page=0;
    do
    {
        inp = getch();

        if (80==inp && 0==page) // Down arrow to switch layouts.
        {
            switch (lay)
            {

            case 1 :
                layout2 ();
                lay=2;
                break;
            case 2 :
                layout3();
                lay=3;
                break;
            case 3 :
                layout1 ();
                lay=1;
                break;
            }
        }
        else if (72==inp && 0==page) // Up arrow to switch layouts.
        {
            switch (lay)
            {

            case 1 :
                layout3 ();
                lay=3;
                break;
            case 2 :
                layout1();
                lay=1;
                break;
            case 3 :
                layout2 ();
                lay=2;
                break;
            }
        }
        else if ((77==inp || 75==inp) && 1==lay) // Right or left arrow to switch pages at a certain layout.
        {
            page=0;
            chk =0;
            for (j=0; j<size && 0==chk; j++)
            {
                system("cls");
                emp = addemp(&size,&filled);
                printf ("aft:  %d\n",emp->id);
                printf ("Press c to continue\n");
                fflush(stdin);
                char x= getch();
                printf("%d",x);
                if (99!=(int)x)
                {
                    chk=1;

                }

            }
            page=0;
            printf ("we should go to layout 1\n");
            layout1 ();
            lay=1;

        }

        else if ((75==inp || 77==inp) && 2==lay) // Left or Right arrow to switch pages at a certain layout.
        {
            switch (page)
            {
            case 0 :
                if (0!=filled) // if there is no data stored then there'll be nothing to display
                {
                    display (emp, &filled);
                    page =1;
                }
                break;
            case 1:
                layout2 ();
                page=0;
                break;
            }
        }
        else if (3==lay && (77==inp || 75==inp)) // Right or Left arrows to exit.
        {
            exit=1;
        }

    }
    while (0==exit);
    return 0;
}
