#include <stdio.h>
int main(void){
    int year,month,day,sum=0;
    printf("请输入日期：");
    scanf("%d/%d/%d",&year,&month,&day);
    if (year%4==0)
    {
       if (month<3)
    {
        sum=31*(month-1)+day;
    }
    else if(8>month>3){
        if (month%2==0)
        {
            sum=60+(month/2-1)*31+(month/2-2)*30+day;
        }
        else
        {
             sum=60+(month-1/2-1)*31+(month-1/2-1)*30+day;
        }
    }
    else
    {
           if (month%2==0)
        {
            sum=213+(month/2-4)*31+(month/2-4)*30+day;
        }
        else
        {
             sum=213+(month-1/2-3)*31+(month-1/2-3)*30+day;
        }
    }
    }
    else
    {
         if (month<3)
    {
        sum=31*(month-1)+day;
    }
    else if(8>month>3){
        if (month%2==0)
        {
            sum=59+(month/2-1)*31+(month/2-2)*30+day;
        }
        else
        {
             sum=59+(month-1/2-1)*31+(month-1/2-1)*30+day;
        }
    }
    else
    {
           if (month%2==0)
        {
            sum=212+(month/2-4)*31+(month/2-4)*30+day;
        }
        else
        {
             sum=212+(month-1/2-3)*31+(month-1/2-3)*30+day;
        }
    } 
    }
   printf("这一天是该年的第%d天",sum);
    return 0;
}
