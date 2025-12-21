#include<stdio.h>
#include<conio.h>

int main()

{
    int Num = 0;

    printf("\n Welcome \n");
    scanf("%d",&Num);

    if( Num > 0)
    {
        printf("\n\n Number is Positive");
    }
    else
    {
        printf("\n\n Number is Negative");
    }

    printf("\n Thank You");

    getch();
    return 0;
}
