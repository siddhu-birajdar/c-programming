//program for star pattern using while loop
#include<stdio.h>

int main()
{
    int i=1,j,r;
    printf("enter the no. of rows");
    scanf("%d",&r);

    while (i<=r)
    {
        j=1;
        while(j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }


}
