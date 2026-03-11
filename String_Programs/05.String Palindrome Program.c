#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0', cSrc[50] = "";
    int i = 0, j = 0;

    printf("\n Enter a string : ");
    gets(cSrc);

    while(cSrc[j] != '\0')
    {
        j++;
    }
    j--;

    while(j > i)
    {
        if(cSrc[i] != cSrc[j])
        {
            break;
        }

        i++;
        j--;
    }

    if( j > i )
    {
        printf("\n Given Source String <%s> is Not Palindrome.", cSrc);
    }
    else
    {
        printf("\n Given Source String <%s> is Palindrome.", cSrc);
    }

    getch();
    return 0;
}
