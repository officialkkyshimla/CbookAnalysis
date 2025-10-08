#include<stdio.h>
int main()
{
  int MM,DD,YYYY;
  printf("Enter Interger in given series MM/DD/YYYY\n");
  scanf("%d/%d/%d",&MM,&DD,&YYYY);
  printf("INDIA/UTC +05:30 according : %d/%d/%d",DD,MM,YYYY);
  return 0;
}
