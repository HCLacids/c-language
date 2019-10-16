#include<stdio.h>
int main(void){
int n,i,a[100],max,min,sum=0;
scanf("%d",&n);
for (i=0;i<n;i++){
	scanf("%d",&a[i]);
	max=a[0];
	min=a[0];
	sum=sum+a[i];}
for (i=0;i<n;i++){
	if (a[i]>max)
	max=a[i];}
for (i=0;i<n;i++){
	if (a[i]<min)
	min=a[i];}
printf("%.2f",(double)(sum-max-min)/(n-2));
return 0;
}
