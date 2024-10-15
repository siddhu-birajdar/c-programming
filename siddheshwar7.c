//program to get a no. from user to print the days in a week

#include<stdio.h>

int main()
{
    int day;

    printf("please enter the number:");
    scanf("%d",&day);

    switch(day)
    {
    case 1:
        printf("monday \n");

        break;
    case 2:
        printf("tuesday \n");

        break;
    case 3:
        printf("wednesday \n");

        break;
    case 4:
        printf("thursday \n");

        break;
    case 5:
        printf("friday \n");

        break;
    case 6:
        printf("saturday \n");

        break;
    case 7:
        printf("sunday");

    }




}
