#include<stdio.h>
int main()
{
  int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
  printf("Enter the number 1-16 in any order\n");
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
  //DISPLAYY IN MATRIX
  printf("%d %d %d %d\n",a,b,c,d);
  printf("%d %d %d %d\n",e,f,g,h);
  printf("%d %d %d %d\n",i,j,k,l);
  printf("%d %d %d %d\n",m,n,o,p);
  printf("Row Sum : %d %d %d %d\n",a+b+c+d,e+f+g+h,i+j+k+l,m+n+o+p);
  printf("Column Sum : %d %d %d %d\n",a+e+i+m,b+f+j+n,c+g+k+o,d+h+l+p);
  printf("Diagonal Sum : %d %d\n",a+f+k+p,d+g+j+m);
  //magic square if row,column,diagonal sum are same
  return 0; 
  
}
