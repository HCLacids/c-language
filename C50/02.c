#include<stdio.h>
int main(void){
int x,y,grade;
printf("请输入两门课的成绩：\n");
printf("语文：");	scanf("%d",&x);
printf("数学：");	scanf("%d",&y);
if (x<0||x>100||y<0||y>100)
	grade=1;
else if (x>=60&&y>=60) 
	grade=2;
else if (0<x<60||0<y<60) 
	grade=3;

switch (grade){
	case 1: puts("it is error"); break;
	case 2: puts("it is pass"); break;
	case 3: puts("it is not pass");			     

}
return 0;
}





