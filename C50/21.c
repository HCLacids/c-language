#include<stdio.h> 
int main() 
{ 
 int a[1002]={0,0,2,2}; 
 int i,n,k=4; 
 for(i=4;i<1001;i++) 
 { 
  a[i]=(k%10000+a[i-2]%10000)%10000; 
  k=k*2%10000; 
 } 
   while(scanf("%d",&n),n) 
       printf("%d\n",a[n]); 
 return 0; 
}