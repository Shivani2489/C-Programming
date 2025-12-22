#include<stdio.h>
#include<conio.h>

int main()
{
    int Year = 0;

    printf("\n Enter Year : ");
    scanf("%d",&Year);

    if(Year % 4 == 0)
    {
        printf("\n Given Year %d is Leap Year",Year);
    }
    else
    {
        printf("\n Given Year %d is Not Leap Year",Year);
    }

    printf("\n\n Thank You, Have a Great Year \n");

    getch();
    return 0;
}
