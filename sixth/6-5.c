#include<stdio.h>
int sumup (int n){
int sum=0,i;
	for(i=0;i<=n;i++)
		sum+=i;
			return sum;
}
int main(void){
	int x;
printf("请输入整数n:");
scanf("%d",&x);
printf("1至n的和为%d。",sumup(x));
return 0;



}
