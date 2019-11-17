#include<stdio.h>
int main(void){
    int a[100];
    int n ;
    int k ;
    while(scanf("%d",&n)!=EOF&&n!=0){
        for (int i = 0; i < n; i++){
            scanf(" %d",&a[i]);
        }
        int min = a[0];
        for (int i = 0; i < n; i++){
            if (a[i]<min){
            min=a[i];
            k =i ;}
        }
        int temp ;
        temp = a[0];
        a[0] = a[k] ;
        a[k] = temp ;
        for (int i = 0; i < n; i++){
            printf("%d",a[i]);
        }
        
    }
}