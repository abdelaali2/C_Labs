#include <stdio.h>
#include <stdlib.h>

int main()
{
    //4- Write a program that reads a student grade percentage and prints "Excellent" if his grade is greater than or equal 85,
    //  "Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" for less than 50
    int grade;
    printf (" Enter the student's grade (with max. = 100)\n");
    scanf ("%d", &grade);
    if (grade >=0 && grade < 50)
    {
        printf ("Fail\n");
    }
    else if (grade >= 50 && grade < 65)
    {
        printf ("Pass\n");
    }
    else if (grade >= 65 && grade < 75)
    {
        printf ("Good\n");
    }
    else if (grade >= 75 && grade < 85)
    {
        printf ("Very Good\n");
    }
    else if (grade >= 85 && grade <= 100)
    {
        printf ("Excellent\n");
    }
    else if (grade > 100 || grade < 0)
    {
        printf ("This grade is Invalid\n");
    }
    return 0;
}
