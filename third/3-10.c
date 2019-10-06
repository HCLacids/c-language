#include<stdio.h>
int main(void){
int x,y,z;
printf("请输入三个整数：");
printf("整数A：");	scanf("%d",&x);
printf("整数B：");	scanf("%d",&y);
printf("整数C：");	scanf("%d",&z);
if (x==y&&y==z)
	puts("三个数都相等。");
else if (x==y&&x!=z||x==z&&x!=y||y==z&&y!=x)
	puts("有两个数相等。");
else
	puts("三个数都不相等。");
return 0;
}
