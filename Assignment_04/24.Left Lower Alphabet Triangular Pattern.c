#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';
    int i = 0, j = 0, RC = 0;

    printf("\n Enter the Row and Column Count : ");
    scanf("%d",&RC);

    printf("\n ====================================================\n\n");

    for( i = 1; i <= RC; i++ )
    {
        for(ch = 'A', j = 1; j <= RC; j++, ch++ )
        if(i >= j)
        {
            printf(" %c ",ch);
        }
        else
        {
            printf("   ");
        }
        printf("\n");
    }

    getch();
    return 0;
}

