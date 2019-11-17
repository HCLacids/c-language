#include<stdio.h>
#include<math.h>
int max (int a , int b ) {
    int max=0;
    if (a>b) {
max = a ;
}else
{
 max = b ;
}
return max;
    
}
int main (void){
    int m , n ;
     int father[m][n];
     int x , y ;
     int son[x][y];
     int MAX;
     printf("m n x y:");
     scanf("%d%d%d%d",&m,&n,&x,&y);
    for (int i = 0; i < m; i++){
        for (int j = 0 ; i < n ; i++){
        scanf("%d",&father[i][j]);
        father[i][j]+=father[i-1][j]+father[i][j-1]-father[i-1][j-1]; 
        if(i>=x&&j>=y){
                 MAX=max(MAX,father[i][j]-father[i][j-y]-father[i-x][j]+father[i-x][j-y]);
            }
         }
    }
  printf("%d\n",MAX) ;  
  return 0 ;
}