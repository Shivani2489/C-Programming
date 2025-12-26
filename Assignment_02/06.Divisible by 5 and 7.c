#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0;

  printf("\n Enter Number : ");
  scanf("%d",&No);

  if(No % 5 == 0 || No % 7 == 0)
  {
    printf("\n Number is Divisible by 5 and 7");
  }
  else
  {
    printf("\n Number is not Divisible by 5 and 7");
  }

  getch();
  return 0;
}
