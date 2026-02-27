#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int Len = 0;
    char Name[8] = "Unknown";

    printf("\n String Value : %s. \n", Name);

    printf("\n Enter Your Name : ");
    gets(Name);

    Len = strlen(Name);

    printf("\n Size of new string is = %d.\n", sizeof(Name));

    printf("\n Given string is : %s \n", Name);

    getch();

    printf("\n Length of Given String is : %d. \n", Len);

    getch();
    return 0;
}
