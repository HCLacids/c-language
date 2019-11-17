#include<stdio.h>
#include<math.h>
int max (int a[], int N ){
    int max = a[0];
    for (int i = 0; i <N  ; i++){
        if (a[i>max])
        {
            max=a[i];
        }
        return max;
    }
    
}
int main (void){
    int a[10000][2];
    int b[10000];
    int N;
    scanf("%d",&N);
    for (int i = 0; i < N; i++){
        for (int j = 0 ; j <2 ; j++){
            scanf ("%d",&a[i][j]);
        }
    }
    for (int i = 0; i < N; i++){
        b[i]=sqrt ((a[i][1])^2+(a[i][2])^2);
    }
    printf("%.2d",max(b[N],N));
    return 0 ;
}