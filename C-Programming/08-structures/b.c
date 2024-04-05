#include<stdio.h>
#include<string.h>

struct bankdetails
{
  char bankname[300];
  char holdername[200];
  long long  acountnum;
  char ifccode[200];
  float balance;
}s[2];

int main()
{
    printf("Enter Bank details information of Coustmer:\n");
    printf("------------------------------------------------------------------------------------------");
    for (int i = 0; i < 2; i++)
  {
      fflush(stdin);
      printf("\nEnter a Bank Name : ");
      gets(s[i].bankname);
      printf("\nEnter Bank Holder Name : ");
      gets(s[i].holdername);
      printf("\nEnter a IFC Code : ");
      gets(s[i].ifccode);
      printf("\nEnter a Bank Account Number : ");
      scanf("%lld", &s[i].acountnum);
      printf("Enter a Bank Balance : ");
      scanf("%f", &s[i].balance);
    }
    printf("\n------------------------------------------------------------------------------------------");
    printf("\n\nDisplaying Information of Worker:\n\n");

    for (int i = 0; i < 2; i++)
    {
      printf("\nBank Name : %s",s[i].bankname);
      printf("\nBank Holder Name : %s",s[i].holdername);
      printf("\nBank Account Number : %d",s[i].acountnum);
      printf("\nIFC Code : %s",s[i].ifccode);
      printf("\nBank Balance : %0.3f",s[i].balance);
      printf("\n");
    }

  return 0;
}