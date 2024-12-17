#include<stdio.h>
int convertdays
(int totaldays,int*years,int *weeks,int * days )
{
    *years=totaldays /365;
    int remainingdays=totaldays % 365;
    *weeks=remainingdays /7;
    *days=remainingdays %7;

}
int main()
{
    int totaldays,years,weeks,days;

    printf("enter the total number of days :");
    scanf("%d", & totaldays);

    convertdays(totaldays,&years,&weeks,&days);
    printf("%d days=%d years,%d weeks, and%d days\n",totaldays ,years,weeks,days);


}
