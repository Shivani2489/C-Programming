#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&No1);
    printf("\n Enter 2nd Number : ");
    scanf("%d",&No2);

    printf("\n ====================================================\n\n");

    if(No2 < 1)
    {
        printf("\n Invalid Number");
        return -1;
    }

    printf("\n\n");

    while( No2 > 0)
    {
        printf("  %d ", No1);
        No2--;
    }

    printf("\n\n ...Thank You...");

    getch();
    return  0;
}
