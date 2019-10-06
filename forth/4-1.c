#include<stdio.h>
int main(void){
int x;
do{
puts("请输入一个整数：");	scanf("%d",&x);
if(x==0)
	puts("该整数为0。");
else if (x>0)
	puts("该整数为正数。");
else
	puts("该整数为负数。");

}while(1);
return 0;
}
