#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';
    int i = 0, j = 0, RCnt = 0, CCnt = 0;

    printf("\n Enter the Row Count : ");
    scanf("%d",&RCnt);
    printf("\n Enter the Column Count : ");
    scanf("%d",&CCnt);

    printf("\n ====================================================\n\n");

    for(ch = 1, i = 1; i <= RCnt; i++)
    {
        for(ch = 'A',j = 1; j <= CCnt; j++, ch++)
        {
            printf(" %c ",ch);
        }
        printf("\n");
    }

    getch();
    return 0;
}

