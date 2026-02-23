#include<stdio.h>
#include<conio.h>

int main()
{

    int i = 0, j = 0, RC = 0,RInc = 0, CInc =0;

    printf("\n Enter the Row and Column Count : ");
    scanf("%d",&RC);

    if(RC > 100 || RC < 1)
    {
        printf("\n Invalid Value");
        return -1;
    }

    printf("\n ====================================================\n\n");

    for(i = 1, RInc = 101; i <= RC; i++)
    {
        for(j = 1, CInc = RInc ; j <= RC; j++)
        {
              printf(" %3d ",CInc);
              CInc++;
        }
        RInc = RInc + 100;
        getch();

        printf("\n");
    }

    printf("\n ====================================================\n\n");
    getch();
    return 0;
}
