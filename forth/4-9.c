#include<stdio.h>
int main(void){
int x,i=1;
printf("正整数：");	scanf("%d",&x);
while(i<=x){
	if(i%2!=0)
putchar('+');
	else
putchar('-');
i++;
}
return 0;
}
