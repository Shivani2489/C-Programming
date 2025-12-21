#include<stdio.h>
#include<conio.h>

int main()
{
    int No1, No2;
    printf("\n Enter the Number : ");
    scanf("%d",%No1,No2);

    if(No1 > No2)
    {
        printf("\n First Number is Maximum than Second Number. ");
        printf("\n Second Number is Maximum than First Number. ");
    }
    else if(No2 > No1)
    {
        printf("\n First Number is Minimum than Second Number. ");
        printf("\n Second Number is Minimum than First Number. ");
    }
    else if(No1 = No2)
    {
        printf("\n Both Numbers are Equal. ");
    }
}

