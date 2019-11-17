#include<stdio.h>
int main (void){
    int m;
    double i;
    scanf("%d",&m);
    for (int i = 0; i < m; i++){
        int n;
        scanf("%d",&n);
        for ( i= 0;  i <=n; i++){
        i=i+1/(i+1)*(-1)^(i-1);
        }
    }
    printf("%.2f",i);
}