#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;

        printf("\n\n After converting to LowerCase : %c.",ch);
    }
    else
    {
        printf("\n %c is not UpperCase Letter", ch);
    }

    printf("\n\n ...Thank You...");

    getch();
    return 0;
}
