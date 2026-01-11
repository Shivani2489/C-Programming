#include<stdio.h>
#include<conio.h>
#define  Size  7

int main()
{
    int No[Size] = {}, i = 0, Evn_Cnt = 0, Od_Cnt = 0, Zr_Cnt = 0;

    printf("\n Enter Array Elements : \n");

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Element No %d = ",i+1);
        scanf("%d",&No[i]);
    }

    for(i = 0; i < Size; i++)
    {
        if(No[i] == 0)
        {
            Zr_Cnt++;
        }
        else if( No[i] % 2 == 0 )
        {
            Evn_Cnt++;
        }
        else
        {
            Od_Cnt++;
        }
    }

    printf("\n\n EVEN Elements Count is => %d.", Evn_Cnt);
    printf("\n\n ODD Elements Count is => %d.", Od_Cnt);
    printf("\n\n ZERO Elements Count is => %d.", Zr_Cnt);

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
