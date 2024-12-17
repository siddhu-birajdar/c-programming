#include<stdio.h>
int main()
{
    int angle1,angle2,angle3;
    int*ptr1=&angle1,*ptr2=&angle2,*ptr3=&angle3;
    printf("enter the three angles of triangle:");
    scanf("%d%d%d",ptr1,ptr2,ptr3);

    if(*ptr1+ *ptr2+ *ptr3==180&& *ptr1>0 && *ptr2>0&& *ptr3>0){

        printf("a trianle can be formed \n");

    }
    else{
        printf("a trianle cannot be formed \n");
    }
}
