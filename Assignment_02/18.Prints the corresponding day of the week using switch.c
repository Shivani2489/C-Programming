#include<stdio.h>
#include<conio.h>
int main()
{
  int Day = 0;

  printf("\n Enter a Day from 1-7 : ");
  scanf("%d",&Day);

  switch(Day)
  {
    case 1:
      printf("\n It's Monday");
      break;

    case 2:
      printf("\n It's Tuesday");
      break;

    case 3:
      printf("\n It's Wednesday");
      break;

    case 4:
      printf("\n It's Thursday");
      break;

    case 5:
      printf("\n It's Friday");
      break;

    case 6:
      printf("\n It's Saturday");
      break;

    case 7:
      printf("\n It's Sunday");
      break;

    default :
      printf("\n Invalid Day");
      break;
  }

  printf("\n ...Thank You...");

  getch();
  return 0;
}
