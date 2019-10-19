
#include<stdio.h>
int main(int argc,const char*argv){
    int a[100000],i,j,k,l,temp;
    int n,m;
     scanf("%d",&n);      scanf("%d",&m);
      for (i = 0; i < n; i++){
        scanf("%d",&a[i]);
      }
      for ( j = 0; j < n; j++) {
          for ( k = j+1; k<= n; k++){
              if (a[j]<a[k]){
                  temp=a[j];
                  a[j]=a[k];
                  a[k]=temp;
              }
              
          }
          
      }
  for ( l = 0; l <m; l++){
      printf("%d",a[l]);
  }
      return 0;
}
/*int main(void){
    int n,m,x=0;
    int a[100000],b[100000];
    scanf("%d",&n);      scanf("%d",&m);
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < m; i++){
        int max=a[0];
        if (a[i]>max){
            b[x]=a[i];
            x++;
        }
    }
    for ( x = 0; x< m; x++){
        printf("%d\n",b[x]);
    }
    return 0;
}*/