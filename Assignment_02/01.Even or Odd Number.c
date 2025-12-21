#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter Number : ");
    scanf("%d",&No);

    if(No % 2 == 0)
    {
        printf("\n\n %d is Even Number", No);
    }

    else
    {
        printf("\n\n %d is Odd Number", No);
    }

    printf("\n\n Thanks");

    getch();
    return 0;

}
