#include<stdio.h>
int main(void){
int x,y,z;
printf("请输入三个整数：");	scanf("%d%d%d",&x,&y,&z);
int max=x;
if(y>max)
	max=y;
else if(z>max)
	max=z;
else max=x;
printf("最大值为%d。\n",max);
return 0;


}
