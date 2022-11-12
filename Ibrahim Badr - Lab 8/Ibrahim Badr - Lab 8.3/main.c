/*
3. C Program to calculate sum of student degrees, and average of each subject, asks the user for
	students and subject numbers. (Dynamic Allocation of 2D Array - Pointer to Pointer)
*/


#include <stdio.h>
#include <stdlib.h>
void dashed(void);

int main()
{
    int StNum=0,CrNum=0;
    int i=0,j=0;
    int StSum,CrSum;
    float CrAvg=0;
    printf("Enter total No. of students : ");
    scanf ("%d",&StNum);
    dashed();
    int ** St = (int**) malloc(StNum*sizeof(int*));
    printf("Enter No. of courses for each student : ");
    scanf ("%d",&CrNum);
    for (i=0; i<StNum; i++)
    {
        St[i]=(int*)malloc(CrNum*sizeof(int));
    }
    for (i=0; i<StNum; i++)
    {
        dashed();
        for (j=0; j<CrNum; j++)
        {
            dashed();
            printf ("Enter Student No. (%d) grade in Course No. (%d): ",i+1,j+1);
            scanf ("%d",&St[i][j]);
        }
    }

    for (i=0; i<StNum; i++)
    {
        dashed();
        StSum=0;
        printf ("Student No.(%d) grades are\n",i+1);
        for (j=0; j<CrNum; j++)
        {
            printf ("Course No.(%d): %d\n",j+1,St[i][j]);
            StSum+=St[i][j];
        }
        printf ("\tTotal Grades : %d\n",StSum);
    }
    for (j=0; j<CrNum; j++)
    {
        dashed();
        CrSum=0;
        for (i=0; i<StNum; i++)
        {
            CrSum+=St  [i][j];
        }
        CrAvg =(float) CrSum/StNum;
        printf("Course No.(%d) Avg. is %f\n",j+1,CrAvg);
    }

    return 0;
}

void dashed (void)
{
    int i;
    for (i=0; i<50; i++)
    {
        printf ("-");
    }
    printf ("\n");
}
