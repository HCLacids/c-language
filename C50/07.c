#include<stdio.h>
int main(void){
    int a[10];
    int i=0;
    int sum=1;
    int n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
    scanf("%d",&a[i]);
    if (a[i]%2!=0)
    sum=sum*a[i];}
    printf("%d",sum);
    return 0;
}
