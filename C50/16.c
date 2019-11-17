#include<stdio.h>
int main(void){
    int ch;
    int cnt[5]={0};
    int a[5]={"a","e","i","o","u"};
    while ((ch =getchar())!=EOF){
        switch (ch){
        case 'a':  cnt[0]++ ; 
            break;
         case 'e':  cnt[1]++ ; 
            break;
         case 'i':  cnt[2]++ ; 
            break;
         case 'o':  cnt[3]++ ; 
            break;
         case 'u':  cnt[4]++ ; 
            break;
        }
    }
    puts("元音出现的次数") ;
    for (int i = 0 ; i < 5 ; i++)
     printf("'%s'=%d\n", a[i] , cnt[i]) ;
    return 0 ;
}