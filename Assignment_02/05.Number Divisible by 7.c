#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0;

  printf("\n Enter Number : ");
  scanf("%d",&No);

  if(No % 7 == 0)
  {
    printf("\n Number is Divisible by 7.");
  }
  else
  {
    printf("\n Number is not Divisible by 7.");
  }

  printf("\n\n ...Thank You...");

  getch();
  return 0;
}
