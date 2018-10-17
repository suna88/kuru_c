#include<stdio.h>

int main(void)
{
  int x,y,money,payment,change;
  x = 198;
  y = 138;
  money = 1000;
  payment = (int)((x + 2*y) * 1.05);
  change = money - payment;
  printf("%d",change);

  return 0;
}
