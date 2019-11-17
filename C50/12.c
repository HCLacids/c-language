#include<stdio.h>
int main(void){
int n,i=0;
scanf("%d",&n);
if (0 < n&&n <= 1000){
   while (n!=1){
       i++;
       if (n%2==0){
           n=n/2;
       }else{
        n=(3*n+1)/2;
       }
       
       
   } 
}
else{
    printf("请输入不超过1000的正整数。\n");
}
printf("步数%d",i);
return 0;
}
