#include <stdio.h>
int main(void){
int x,y,max,min,sum=0,a;
puts("请输入两个整数。");
printf("整数1：");	scanf("%d",&x);
printf("整数2：");	scanf("%d",&y);
if(x>y){
max=x;
min=y;
a=y;
}else{
max=y;
min=x;
a=x;
}
do{
	sum=min+sum;
	min=min+1;
	}while(min<=max);
printf("大于等于%d与小与等于%d的所有整数和为%d\n",a,max,sum);
return 0;
}
