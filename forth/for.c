#include <stdio.h>
int main(void){
	int x,i=1,sum=0;
printf("n的值为");
scanf("%d",&x);
while(i<=x){
sum+=i;i++;
}

printf("1到%d的和为%d。\n",x,sum);
return 0;}
