#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character : ");
    scanf("%c",&ch);

    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
        printf("\n\n After converting to UpperCase : %c.",ch);
    }
    else
    {
        printf("\n %c is not LowerCase Letter", ch);
    }

    printf("\n\n...Thank You...");

    getch();
    return 0;
}
