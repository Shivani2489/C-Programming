#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter Number Between 1-7 : ");
    scanf("%d",&No);

    if(No == 1)
    {
        printf("\n\n Monday");
    }
    else if (No == 2)
    {
        printf("\n\n Tuesday");
    }
    else if (No == 3)
    {
        printf("\n\n Wednesday");
    }
    else if (No == 4)
    {
        printf("\n\n Thursday");
    }
    else if (No == 5)
    {
        printf("\n\n Friday");
    }
    else if (No == 6)
    {
        printf("\n\n Saturday");
    }
    else if (No == 7)
    {
        printf("\n\n Sunday");
    }
    else
    {
        printf("\n\n ...Invalid Number...");
    }

    printf("\n\n Have a Good Day...");

    getch();
    return 0;
}
