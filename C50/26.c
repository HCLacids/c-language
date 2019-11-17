#include <stdio.h>
int main (void){
int x,y,z;
int temp,temp1,temp2;
int a;
int n,m;
printf("输入两个整数：");	scanf("%d%d",&x,&y);

if (x<y){
	temp=y;
	y=x;
	x=temp;}
n =  x;
m = y;
do{
z=x%y;
temp1=z;
temp2=y;
int m=x/y;
x=temp2;
y=temp1;

}while(z=0);
    if (x = 0){
        printf("%d",temp);
    }else{
        m = m / x;
        n = n / x;
        a = m * n * x;
        printf("%d",a);
    }
    
    return 0;

}