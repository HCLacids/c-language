#include<stdio.h>
int main(void){
    int student[50][5];
    int num1,num2,sum1[50]={0},sum2[5]={0},pass=0;
    printf("学生人数：");
    scanf("%d",&num1);
    printf("科目数：");
    scanf("%d",&num2);
    for (int i = 0; i <num1; i++){
        for (int n = 0; n<num2; n++){
         scanf("%d",&student[i][n]);
        }
    }
    for (int i = 0; i < num1; i++){
         for (int n = 0; n<num2; n++){
            sum1[i]=sum1[i]+student[i][n];
         }
    }
    for (int i = 0; i < num2; i++){
         for (int n = 0; n <num1; n++){
            sum2[i]=sum2[i]+student[n][i];
         }
    }
    for (int i = 0; i < num1; i++){
        printf("%d学生的平均成绩：%.2f",i+1,(double)sum1[i]/num2);
    }
     for (int i = 0; i < num2; i++){
        printf("%d每门课程的平均成绩：%.2f",i+1,(double)sum2[i]/num1);
    }
    for (int i = 0; i < num1; i++) {
        for (int n= 0; i < num2; n++){
            if (student[i][n]>(double)sum2[i]/num1){
                pass++;
            }
         }
         printf("%d",pass);
        return 0;
    }
    

}