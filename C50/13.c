#include<stdio.h>
int main(void){
    int a , b , c ;
    int n ;
    scanf("%d", & n);
    for (int i = 0 ; i < n ; i++ ){
        scanf("%d%d%d",&a,&b,&c);
        if (a+b>c){
            printf("case#i+1:true");
        }
        else{
           printf("case#i+1:false");
        } 
    }
}