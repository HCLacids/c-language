#include<stdio.h>
int main (void){
    int n ;
     int ch;
    int cnt[5]={0};
    while ((ch =getchar())!=EOF){
        switch (ch){
        case '1':  cnt[0]++ ; 
            break;
         case '2':  cnt[1]++ ; 
            break;
         case '3':  cnt[2]++ ; 
            break;
         case '4':  cnt[3]++ ; 
            break;
         case '5':  cnt[4]++ ; 
            break;
        }

}