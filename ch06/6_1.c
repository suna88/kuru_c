#include<stdio.h>

int main(void)
{
  int price;
  scanf("%d",&price);
  printf("1割引\t%d\n", (int)(0.9*price));
  printf("3割引\t%d\n", (int)(0.7*price));
  printf("5割引\t%d\n", (int)(0.5*price));
  printf("8割引\t%d\n", (int)(0.2*price));
  return 0;
}
