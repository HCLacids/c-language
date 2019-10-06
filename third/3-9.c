#include<stdio.h>
int main(void){
int x,y;
printf("请输入两个整数：");	scanf("%d%d",&x,&y);
x==y?puts("两数相等。"):puts("两数不相等。");
return 0;

}
