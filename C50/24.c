#include <stdio.h>
int main (void){
    int n;
     int sum = 0;
    scanf ("%d",&n);
    while(n > 0){
        sum = sum + n % 10;
        n = n / 10;
    }
    
   while(sum > 0){
       switch (sum % 10 ){
       case 0 : printf("ling ");
           break;
            case 1 : printf("yi ");
           break;
            case 2 : printf("er ");
           break;
            case 3 : printf("san ");
           break;
            case 4 : printf("si ");
           break;
            case 5 : printf("wu ");
           break;
            case 6 : printf("liu ");
           break;
            case 7 : printf("qi ");
           break;
            case 8 : printf("ba ");
           break;
            case 9 : printf("jiu ");
           break;
       }
       sum = sum / 10;
   }
   return 0;
}