#include<stdio.h>
int main(void){
int x,y,z;
int temp,temp1,temp2;
printf("输入两个整数：");	scanf("%d%d",&x,&y);
if (x<y){
	temp=y;
	y=x;
	x=temp;}

do{
z=x%y;
temp1=z;
temp2=y;
int m=x/y;
x=temp2;
y=temp1;

}while(z=0);
printf("最大公因数：%d",x);
return 0;
}
