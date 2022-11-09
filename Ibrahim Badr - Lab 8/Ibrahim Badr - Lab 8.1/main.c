/*
1. int* IncrementArray()
	- try to return fixed Array first, see what happened.
	- then rerun dynamically allocated array.
*/

#include <stdio.h>
#include <stdlib.h>

int * IncrementArray (void);

int main()
{
    int *heap;
    int i=0;
    heap = IncrementArray();
    printf("The values are : ");
    for (i=0;i<5;i++)
    {
        printf (" %d ",heap[i]);
    }
    return 0;
}


int * IncrementArray (void)
{
    int i=0;
    int *in = (int *) malloc(5*sizeof(int));
    for (i=0;i<5;i++)
    {
        printf("Enter No.%d: ",i+1);
        scanf ("%d",&in[i]);
    }
    return in;
}
