#include<stdio.h>
int main(void){
/*int n=2,i=2;
	do{
i++;
n++;
if (n%i==0){
	int a=0; a++;
	printf("%d",n);
	if(a==5){
		putchar('\n');
		a=0;}}
}while(n>100);

return 0;

}*/
int main(){
    int a=0;  // 素数的个数
    int num=0;  // 输入的整数
do{    
for(int i=2;i<num;i++){
        if(num%i==0){
            a++; 
        }
   }
if(a==0){
        printf("%d", num);}
}while (num>100);

return 0;}
