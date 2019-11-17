#include<stdio.h>
 int main(void){
    int num=0,i=0,a=0;
    int str[1000];
    scanf("%d",&num);
    for(i=0;i<num;i++){
        scanf("%d",&a);
        str[i]=a;
    }
    for(i=0;i<num;i++){
        printf("%c",str[i]);
    }
    return 0;
}
