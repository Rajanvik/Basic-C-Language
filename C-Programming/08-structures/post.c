#include<stdio.h>
#include<string.h>

struct address
{
  char state[300];
  char dist[300];
  char block[300];
  int house;
}a[3];

int main()
{
    printf("Enter address details information of Sender:\n");
    printf("------------------------------------------------------------------------------------------");
    for (int i = 0; i < 3; i++)
  {
      fflush(stdin);
      printf("\nEnter a state Name : ");
      gets(a[i].state);
      printf("\nEnter a district Name : ");
      gets(a[i].dist);
      printf("\nEnter a block name : ");
      gets(a[i].block);
      printf("\nEnter a House number : ");
      scanf("%d", &a[i].house);
    }
    printf("\n------------------------------------------------------------------------------------------");
    printf("\n\nDisplaying Information of Sender:\n\n");

    for (int i = 0; i < 3; i++)
    {
      printf("\nState Name is : %s",a[i].state);
      printf("\nDistrict Name is : %s",a[i].dist);
      printf("\nBlock Name is : %s",a[i].block);
      printf("\nHouse Number : %d",a[i].house);
      printf("\n");
    }

  return 0;
}