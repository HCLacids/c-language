#include<stdio.h>
int main(void){
int x,y;
printf("请输入两个整数：");
printf("整数A：");	scanf("%d",&x);
printf("整数B：");	scanf("%d",&y);
if(x==y)
	puts("A与B相等。");
else if(x>y)
	puts("A大于B。");
else
	puts("A小于B。");
return 0;

}
