#include<stdio.h>

int main()
{
    float basic_salary,hra,da,total;

    printf("enter the basic_salary");
    scanf("%f",&basic_salary);

    hra=0.20*basic_salary;
    da=0.40*basic_salary;
    total=hra+da+basic_salary;

    printf("\nthe hra is %f,\nthe da is %f,\nthe total salary is %f,",hra,da,total);

    return 0;



}
























