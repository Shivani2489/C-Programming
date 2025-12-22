#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 10;

    printf("\n\n Print The Numbers in Descending Order ");

    for(No = 10; No >= 1;)
    {
        printf("\n\n %d",No);
        No--;
    }
    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
