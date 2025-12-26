#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0;

  printf("\n Enter Number : ");
  scanf("%d",&No);

  (No % 2 == 0) ? printf("\n Number is Even") : printf("\n Number is Odd");

  printf("\n\n ...Thank You...");

  getch();
  return 0;
}
