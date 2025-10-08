#include<stdio.h>
int main()
{
  int prefix,identifier,code,number,digit;
  printf("Enter ISBN\n");
  scanf("%d-%d-%d-%d-%d",&prefix,&identifier,&code,&number,&digit);
  printf("Book Detail\n");
  printf("GS1 prefix : %d \n",prefix);
  printf("Group Identifier : %d\n",identifier);
  printf("Publisher code : %d\n",code);
  printf("Item Number : %d\n",number);
  printf("Check Digit : %d\n",digit);
  return 0;
}
