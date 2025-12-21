#include<stdio.h>
#include<conio.h>

int main()
{
    float Rad = 0.0, Area = 0.0, Circum = 0.0;

    printf("\n Enter Radius of Circle : ");
    scanf("%f",&Rad);

    Area = 3.14 * Rad * Rad;

    printf("\n Area of Circle is : %f.", Area);

    getch();
    return 0;
}
