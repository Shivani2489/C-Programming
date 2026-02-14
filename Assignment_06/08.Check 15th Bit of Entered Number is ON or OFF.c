#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    if((No >> 15) & 1)
    {
        printf("\n 15th Bit of Entered Number %d is ON...", No);
    }
    else
    {
        printf("\n 15th Bit of Entered Number %d is OFF...", No);
    }

    getch();
    return 0;
}
