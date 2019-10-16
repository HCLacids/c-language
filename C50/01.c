#include<stdio.h>
int main(void){
	int x,y,z;
	int max,min,mid;
	printf("请输入三个实数：");
	scanf("%d%d%d",&x,&y,&z);
	if(x+y>z&&x!=y||y+z>x&&y!=z||x+z>y&&x!=z)
		puts("1");
	else if(x+y>z&&x==y||y+z>x&&y==z||x+z>y&&z==x)
		puts("2");
	else puts("0");
	return 0;
}
