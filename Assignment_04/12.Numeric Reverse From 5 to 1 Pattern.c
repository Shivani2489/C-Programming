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

    for(i = 1; i <= RCnt; i++)
    {
        for(j = 1, Rev = CCnt; j <= CCnt; j++, Rev--)
        {
            printf(" %2d ",Rev);
        }

        printf("\n");
    }

    getch();
    return 0;
}
