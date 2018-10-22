#include<stdio.h>

int main(void)
{
  int year;
  printf("西暦を入力してください:\t");
  scanf("%d",&year);
  if((year-2000)%4==0){
    printf("%d年は夏季オリンピックが開催されます",year);
    }
  if((year-2000)%4==2){
    printf("%d年は冬季オリンピックが開催されます",year);
    }
  if((year-2000)%4!=2 &&(year-2000)%4!=0){
    printf("オリンピックは開催されません");
    }
  return 0;
}
