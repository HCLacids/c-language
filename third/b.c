#include<stdio.h>
int main(void)
{
	int n;
	printf("请输入一个整数：");
	scanf("%d",&n);
	if (n%5)
	puts("输入的整数不能被5整数。");
	return 0;

}
