//program for star pattern using for loop
#include<stdio.h>

int main()
{
    int r,i,j;
    printf("enter the rows");
    scanf("%d",&r);

    for (i=0;i<r;i++)
    {
        for(j=1;j<=r-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

