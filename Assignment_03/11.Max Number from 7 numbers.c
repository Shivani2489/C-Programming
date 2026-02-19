#include<stdio.h>
#include<conio.h>
int main()
{
  int No = 0,Cnt = 0, Max_No = 0;

  printf("\n ...Enter the 7 Numbers ... \n");

  while(Cnt < 7)
  {
        printf("\n Enter a Number %d : ", Cnt+1);
        scanf("%d",&No);

        if((Cnt == 0) || (No > Max_No))
        {
           Max_No = No;
        }
        Cnt++;
  }

  printf("\n ====================================================\n");

  printf("\n Maximum Number from Given 7 numbers is = %d", Max_No);

  getch();
  return 0;
}
