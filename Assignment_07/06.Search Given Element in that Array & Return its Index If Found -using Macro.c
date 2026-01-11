#include<stdio.h>
#include<conio.h>
#define Size 7

int main()
{
    int i = 0, Ele = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);
    }

    printf("\n ================================================= \n");

    printf("\n Enter Element To Be Searched in Array = ");
    scanf("%d",&Ele);

    for(i = 0 ; i < Size ;  i++ )
    {
        if(Bill[i] == Ele)
        {
            break;
        }
    }

    printf("\n ================================================= \n");

    if(i == Size)
    {
        printf("\n No Such Element Found in Array");
    }
    else
    {
        printf("\n Element %d Found at Index %d .", Ele, i );
    }

    getch();
    return 0;
}
