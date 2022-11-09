#include <stdio.h>
#include <stdlib.h>
void conc (int l1,int l2,char ar1[10],char ar2[10]);
int main()
{
    // 4)C Program to take firstName and lastName from user, then displays fullName.
    char fname[10];
    char lname[10];
    printf ("Enter Your First Name\n");
    scanf ("%s",fname);
    printf ("Enter Your Last Name\n");
    scanf ("%s",lname);
    conc (sizeof(fname),sizeof(lname),fname,lname);
    return 0;
}

void conc (int l1,int l2,char ar1[l1],char ar2[l2])
{
    char full [l1+l2];
    int i=0;
    int j=0;
    //int co=0;
    //int done1=0;
    //int done2=0;
    for (i=0; '\0'!=ar1[i]; i++)
    {
        full[i]=ar1[i];
    }
    full[i]=' ';
    i++;
    for (j=0; '\0'!=ar2[j] ; j++)
    {
        full [i+j]=ar2[j];
    }
    full[i+j]='\0';
    printf("Your full name is %s\n",full);
}

