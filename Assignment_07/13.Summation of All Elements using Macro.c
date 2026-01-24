#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Size 5

int main()
{
    int i = 0, Bill_Sum = 0, Bill[Size] = {0};

    for(i = 0 ; i < Size ;  i++ )
    {
            printf("\n Enter Bill No %d : ", (i+1) );
            scanf("%d",&Bill[i]);

            if(Bill[i] <= 0)
            {
                printf("\n Invalid Amount");
            }

            Bill_Sum += Bill[i];
    }

    getch();
    system("cls");

    printf("\n Today's Bills : \n");

    for(i = 0 ; i < Size ; i++)
    {
        printf("\n Amount in Bill No %d : %d", (i+1),Bill[i]);
    }

    printf("\n\n =============================================================== \n");

    printf("\n Total Amount : %d.", Bill_Sum);

    getch();
    return 0;
}
