#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("\n Enter a Number : ");
    scanf("%d",&No);

    Res = No << 3;

    printf("\n===========================================================\n");

    printf("\n Result = %d << 3 = %d.", No, Res);

    getch();
    return 0;
}
