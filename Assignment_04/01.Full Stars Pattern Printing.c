#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0;

    printf("\n");

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= 5; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    getch();
    return 0;
}
