#include<stdio.h>
#include<conio.h>

int  main()
{
    int No1 = 0, No2 = 0, Temp = 0;

    printf("\n Enter 1st Number : ");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number : ");
    scanf("%d",&No2);

    printf("\n\n Numbers Before Swapping : No1 = %d, No2 = %d", No1, No2);

    Temp = No1;
    No1 = No2;
    No2 = Temp;

    printf("\n\n Numbers After Swapping : No1 = %d, No2 = %d", No1, No2);

    getch();
    return 0;
}

