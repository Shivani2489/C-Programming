#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[40] = "", cDest[40] = "";
    int i = 0, j = 0;

    printf("\n Enter a string : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }

    i--;

    while(i >= 0)
    {
        cDest[j] = cSrc[i];

        j++;
        i--;
    }

    cDest[j] = '\0';

    printf("\n Source String is : %s.", cSrc);
    printf("\n Destination String is : %s.", cDest);

    getch();
    return 0;
}
