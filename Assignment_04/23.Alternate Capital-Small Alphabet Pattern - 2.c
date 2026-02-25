#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';
    int i = 0, j = 0, RC = 0;

    printf("\n Enter the Row and Column Count : ");
    scanf("%d",&RC);

    printf("\n ====================================================\n\n");

    for( ch = 'A', i = 1; i <= RC; i++, ch++ )
    {
        for( j = 1; j <= RC; j++ )
        if(j % 2 == 0)
        {
            printf(" %c ",ch);
        }
        else
        {
            printf(" %c ",ch+32);
        }
        printf("\n");
    }

    getch();
    return 0;
}

