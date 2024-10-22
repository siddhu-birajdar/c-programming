//program for star pattern using while loop
#include <stdio.h>



int main()

{

    int i=1, j, r;

    printf("Enter the number of rows: ");

    scanf("%d", &r);

    while (i <= r)

    {

        j = 1;

        while (j <= i)

        {

            printf("*");

            j++;

        }

        printf("\n");

        i++;
    }
       i=j-1;


       while (i<=r)

    {
       j=1;

        while (j <=r-i)

        {

            printf("*");

            j++;
         }

        printf("\n");

        i++;

    }
    }
