#include<stdio.h>
int main()
{
  int x,y;
  //x and y in space format
  printf("Enter X and Y\n");
  scanf("%d %d",&x,&y); // here %d space %d decide taken input in space otherwise this take undefined value and give error
  //x and y in continous this is difficult to read because if number is one digit then ok otherwise the compiler is confused what taken
  printf("enter X and y\n");
  scanf("%d%d",&x,&y);
  //this concept apply all other symbol as - and , and many more symbol which use input taken
  printf("enter x and y\n");
  scanf("%d-%d",&x,&y);
  return 0;
}
