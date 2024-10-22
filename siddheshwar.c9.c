//program to get no. from user  for mathemtical table using while loop
#include<stdio.h>

int main()
{
    int number,i=1,t;

    printf("enter the number");
    scanf("%d",&number);

    while (i<=10)
    {
       t=i*number;
       printf("\n%d",t);
       i++;
    }



}
