#include<stdio.h>
int main (void){
    int a[10^4];
    int M , N ;
    int i = 0 , n ,  j = 0 , temp ;
    scanf("%d",&M);     scanf("%d",&N);
    if (M>N){
        temp = N ;
        N = M ;
        M = temp ;
    }
    for (i = 1; i < N ; i++){
        for (n = 1; n < i; n++){
            if (i%n!=0){
                j = 0 ;
                a[j]=i;
                j++;
            }   
        }
    }
    do{i++;
    } while (i==M);
    
    while (M<i&&i<N)
    {i++;
        printf("%d",a[i-1]);
     j++ ;
        if (j==10){
            putchar('\n');
            j = 0;
        } 
    }
    return 0 ;    
}