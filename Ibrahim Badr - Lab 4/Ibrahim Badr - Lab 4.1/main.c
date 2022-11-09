#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *);
int main()
{
    //1) C Program to swap 2 integer values. (Swap function, calling by address)
    int x;
    int y;
    printf ("Enter the first No.\n");
    scanf("%d",&x);
    printf ("Enter the second No.\n");
    scanf("%d",&y);
    int *ptrx = &x;
    int *ptry = &y;
    swap (ptrx,ptry);
    return 0;
}

void swap (int *a,int *b)
{
   int temp;

   temp = *b;
   *b = *a;
   *a = temp;
    printf ("First No.= %d\t Second No.= %d\n",*a,*b);
}
