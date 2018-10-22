#include<stdio.h>

int main(void)
{
  int month;
  char name;
  printf("月を入力してください:\t");
  scanf("%d",&month);
  if(month>13 || month<1){
    printf("その月は存在しません");
  }else{
    switch(month){
      case 1:
      	name = "睦月";
	break;
      case 2:
      	name = "如月";
	break;
      case 3:
      	name = "弥生";
	break;
      default:
      	name = "めんどい";
	break;
}	
printf("%cです",name);
  }

}
