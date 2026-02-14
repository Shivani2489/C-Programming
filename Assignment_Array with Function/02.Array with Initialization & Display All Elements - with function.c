#include<stdio.h>
#include<conio.h>

void  Display_Array(int  Arr[] , int  Size);

int main()
{
    int  No[5] = {5,15,45,23,98};

    Display_Array(No, 5);

    getch();
    return 0;
}

void  Display_Array(int  Arr[] , int  Size)
{
    int  i = 0;

    for(i = 0; i < Size; i++)
    {
        printf("\n Value of %d = %d .", i+1, Arr[i]);
    }

    return;
}
