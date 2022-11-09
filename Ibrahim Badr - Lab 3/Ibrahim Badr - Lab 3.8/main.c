#include <stdio.h>
#include <stdlib.h>
void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
int main()
{
    //8- C Program to Generate Multiplication Table "1*3=3, 2*3=6, ..."
    int i=0;
    int j=0;
    int mul;
    for (i=1;i<=12;i++)
    {
        printf ("%d:\t",i);
        for (j=1;j<=12;j++)
        {
            mul=i*j;
            printf ("%d, ", mul);
        }
        printf ("\n");
    }
    printf ("\n");
    delay (0.850);
    return 0;
}
