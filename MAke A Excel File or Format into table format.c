#include<stdio.h>
int main()
{
  int item_code,Unit_price,Purchase_day,Purchase_month,Purchase_year;
  printf("Enter a item detail as Code,Price,Date[DD/MM/YYYY]\n");
  scanf("%d,%d,%d/%d/%d",&item_code,&Unit_price,&Purchase_day,&Purchase_month,&Purchase_year");
  printf("\t\t\t\tItem Detail\n");
  printf("Item\t\t Unit\t\t Purchase\n");
  printf("\t\t\t Price\t\t Date\n");
  printf("%d\t\t %d\t\t %d\%d\%d",item_code,Unit_price,Purchase_day,Purchase_month,Purchase_year);
  return 0;
}
