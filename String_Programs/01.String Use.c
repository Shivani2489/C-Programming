#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char Name[20] = "Unknown";
    char FNm[20] = "Jack";

    printf("\n Name String Value : %s. \n", Name);
    printf("\n FNm String Value : %s. \n", FNm);

    getch();

    strcpy(Name, "Nik");
    printf("\n New Name String Value : %s. \n", Name);
    printf("\n New FNm String Value : %s. \n", FNm);

    getch();

    strcpy(Name, FNm);
    printf("\n Updated Name String Value : %s. \n", Name);
    printf("\n Updated FNm String Value : %s. \n", FNm);

    getch();
    return 0;

}
