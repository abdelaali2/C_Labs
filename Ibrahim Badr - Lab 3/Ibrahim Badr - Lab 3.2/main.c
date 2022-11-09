#include <stdio.h>
#include <stdlib.h>

int main()
{
    //2- Simple Menu with 3 choices.
    char inp;
    printf ("Press p for this choice: Pizza\n");
    printf ("Press b for this choice: Burger\n");
    printf ("Press k for this choice: Koshari\n");
    inp = getche(inp);
    switch (inp)
    {
        case 'p':
        system("cls");
        printf ("Happy Pizza");
        break;
        case 'b':
        system("cls");
        printf ("Happy Burger");
        break;
        case 'k':
        system("cls");
        printf ("Happy Koshari");
        break;
    }
    return 0;
}
