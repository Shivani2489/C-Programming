#include<stdio.h>
#include<conio.h>

int main()
{

    int i = 0, j = 0, RC = 0,Num =100;

    printf("\n Enter the Row and Column Count : ");
    scanf("%d",&RC);

    printf("\n ====================================================\n\n");
    for(i = 1; i <= RC; i++)
    {
        for(j = 1 ; j <= RC; j++)
        {

            printf(" %d ",Num*j);
            Num++;

        }
        printf("\n");
    }

    getch();
    return 0;
}
