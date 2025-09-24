#include<stdio.h>
int main()
{
  int height,width,length,volume,weight;
  printf("Enter the height of box\n");
  scanf("%d",&height);
  printf("Enter the width of box\n");
  scanf("%d",&width);
  printf("Enter the length of box\n");
  scanf("%d",&length);
  volume = height * width * length;
  weight = (volume+165)/166;
  printf("The Volume of the Box is : %d\n cube per inch",volume);
  printf("The Weight of the box is : %d pound",weight);
  return 0;
}

  
