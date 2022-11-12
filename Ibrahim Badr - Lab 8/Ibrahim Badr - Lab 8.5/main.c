/*
5. Try to implement --jagged array-- on Assinment No.4 , which means:
 each student may have number of subjects different than the other.
*/


#include <stdio.h>
#include <stdlib.h>
void dashed(void);

int main()
{
    int StNum=0,CrNum=0;
    int i=0,j=0;
    int *StSum;
    int CrSum[20];
    float CrAvg;
    printf("Enter total No. of students : ");
    scanf ("%d",&StNum);
    dashed();
    int ** St = (int**) malloc(StNum*sizeof(int*));
    StSum = (int *)malloc (StNum*sizeof(int));
    for (i=0; i<StNum; i++)
    {
        printf("Enter No. of courses for student No. (%d) : ",i+1);
        scanf ("%d",&CrNum);
        St[i]=(int*)malloc(CrNum*sizeof(int));
        StSum[i] = (int*)malloc(StNum*sizeof(int));
        StSum[i] = 0;
        dashed();
        for (j=0; j<CrNum; j++)
        {
            dashed();
            printf ("Enter Student No. (%d) grade in Course No. (%d): ",i+1,j+1);
            scanf ("%d",&St[i][j]);
            StSum[i] +=St[i][j];
            CrSum[j]+= St[i][j];
        }
        dashed();
        printf ("\tTotal Grades : %d\n",StSum[i]);
    }
    for(i=0; i<StNum; i++)
    {
        CrAvg = (float)CrSum[i]/StNum;
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
