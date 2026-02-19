///user defined

#include<stdio.h>
#include<conio.h>
int main()
{
  int i = 0, j = 0, sPt = 0, ePt =0;

  printf("\n Enter the Starting Tables's Number : ");
  scanf("%d",&sPt);

  printf("\n Enter the Ending Tables's Number : ");
  scanf("%d",&ePt);

  printf("\n ====================================================\n\n");

  for(i = 1; i <= 10; i++)
  {
      for(j = sPt; j <= ePt; j++)
      {
        printf(" %3d ", i * j);
      }
      printf(" \n ");
  }

  getch();
  return 0;
}
