#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, RCnt = 0, CCnt = 0, Rev = 0;

    printf("\n Enter the Row Count : ");
    scanf("%d",&RCnt);
    printf("\n Enter the Column Count : ");
    scanf("%d",&CCnt);

    printf("\n ====================================================\n\n");

    for(i = 1, Rev = RCnt; i <= RCnt; i++, Rev--)
    {
        for(j = 1; j <= CCnt; j++)
        {
            printf(" %2d ",Rev);
        }

        printf("\n");
    }

    getch();
    return 0;
}
