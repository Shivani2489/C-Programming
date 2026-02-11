#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Res = 0;

    printf("\n Enter the Number :");
    scanf("%d",&No);

    Res = ~No;

    printf("\n =============================================================");

    printf("\n\n Result = ~%d = %d.", No, Res);

    getch();
    return 0;
}
