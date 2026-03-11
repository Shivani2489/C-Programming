#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0', cSrc[40] = "";
    int i = 0, j = 0;

    printf("\n Enter a string : ");
    gets(cSrc);

    printf("\n Source String before Reverse is : %s", cSrc);

    getch();

    while(cSrc[i] != '\0')
    {
        i++;
    }

    i--;

    while(i > j)
    {
        ch = cSrc[i];
        cSrc[i] = cSrc[j];
        cSrc[j] = ch;

        j++;
        i--;
    }

    printf("\n\n String After Reverse is : %s", cSrc);

    getch();
    return 0;
}
