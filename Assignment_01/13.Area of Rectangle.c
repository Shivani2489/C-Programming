#include<stdio.h>
#include<conio.h>

int main()
{
    int Width, Height, Area;

    printf("\n Enter Width = ");
    scanf("%d",&Width);
    
    printf("\n Enter Height = ");
    scanf("%d",&Height);


    Area = Width * Height;
    
    printf("\n Area of Rectangle is : %d", Area);

    getch();
    return 0;
}

