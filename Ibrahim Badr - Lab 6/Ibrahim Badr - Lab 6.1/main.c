/*
1) Input and Output from Array using pointers:
  C Program that have an Array of integers, read array data from user, Ptr -> Arr, print that array using Ptr.
 (try to use "Array Notation while reading data" and "Pointer notation while printing data")
*/
#include <stdio.h>
#include <stdlib.h>
#define size 10

void read (int [size]);
void write (int *);

int main()
{
    int x[10]= {0};
    read(x);
    write(x);
    return 0;
}


void read (int * in)
{
    int i;
    for (i=0; i<size; i++)
    {
        printf ("Enter value No. (%d)\n",i+1);
        scanf ("%d",&in[i]);
    }
}

void write (int *ptr)
{
    int i;
            printf ("The values are:\n");

    for (i=0; i<size; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}
