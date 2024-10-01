#include<stdio.h>

int main(){

    float mark1,mark2,mark3,mark4,mark5,out_of1,out_of2,out_of3,out_of4,out_of5,total_out_of,total_mark,percent;


    printf("enter the first subject mark and total_mark");
    scanf("%f %f",&mark1,&out_of1);

    printf("enter the second subject mark and total_mark");
    scanf("%f %f",&mark2,&out_of2);

    printf("enter the third subject mark and total_mark");
    scanf("%f %f",&mark3,&out_of3);

    printf("enter the fourth subject mark and total_mark");
    scanf("%f %f",&mark4,&out_of4);

    printf("enter the fifth subject mark and total_mark");
    scanf("%f %f",&mark5,&out_of5);

    total_mark=mark1 + mark2 + mark3 + mark4 + mark5;
    total_out_of=out_of1 + out_of2 + out_of3 + out_of4 +out_of5;

    percent=total_mark/total_out_of*100.0;

    printf("the total marks are %f and the percent is %f",total_mark,percent);















}
