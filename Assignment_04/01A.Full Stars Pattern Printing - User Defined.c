#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, Cnt = 0;

    printf("\n Enter the Star Count : ");
    scanf("%d",&Cnt);

    printf("\n ====================================================\n\n");

    for(i = 1; i <= Cnt; i++)
    {
        for(j = 1; j <= Cnt; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
