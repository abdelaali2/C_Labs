#include "mylibrary.h"


void ext_nav (char *l, int *i)
{
    if(left==*l && (0!=*i))
    {
        (*i)--;
        gotoxy (20+(*i),8);
    }
    else if (right==*l && (size!=*i))
    {
        (*i)++;
        gotoxy (20+(*i),8);
    }
    else if (home==*l)
    {
        (*i)=0;
        gotoxy (20+(*i),8);
    }
    else if (en==*l)
    {
        (*i)=size;
        gotoxy (20+(*i),8);
    }
}



void back_space (char *inp, int *i, int *num)
{
    printf("%c   %d    %d   \n",*inp,*i,*num);
    *inp=putch(' ');
    (*num)--;
    (*i)--;
}




