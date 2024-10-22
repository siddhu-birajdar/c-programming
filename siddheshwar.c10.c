//program to get no. from user  for mathemtical table using for loop
#include<stdio.h>

int main()
{
    int number,i=1,t;

    printf("enter the number");
    scanf("%d",&number);

    for(i=1;i<=10;i++)
    {
       t=i*number;
       printf("\n%d",t);

    }



}
