#include<stdio.h>
int main(void){
int month;
printf("请输入月份：");
scanf("%d",&month);
switch (month){
	case 1:
	case 2:
	case 12:puts("该月在冬季。");	break;
	case 3:
	case 4:
	case 5:puts("该月在春季。");	break;
	case 6:
	case 7:
	case 8:puts("该月在夏季。");	break;
	case 9:
	case 10:
	case 11:puts("该月在秋季。");	break;
	default :puts("该月不存在"); break;

}

return 0;


}
