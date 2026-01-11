#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 7

int main()
{
    int i = 0, Od_Cnt = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
        printf("\n Enter Bill No %d = ", (i+1) );
        scanf("%d",&Bill[i]);

        if(Bill[i] % 2 == 1)
        {
            Od_Cnt++;
        }
    }

    getch();

    system("cls");

    printf("\n Display Bills : \n");

    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill No %d = %d", (i+1),Bill[i]);
    }

    printf("\n\n ODD Bills Count is %d .",Od_Cnt );

    getch();
    return 0;
}
