#include<stdio.h>

int main()
{
    float distance,centimeter,feet,meter,inches;

    printf("enter the distance between two cities in :");
    scanf("%f",&distance);

    meter=distance*1000;
    centimeter=meter*100.00;
    feet=distance*3280.84;
    inches= meter*39.3701;





    printf("\nthe distance between two cities in centimeter%f",centimeter);
    printf("\nthe distance between two cities in feet%f",feet);
    printf("\nthe distance between two cities in inches%f",inches);
    printf("\nthe distance between two cities in meter%f",meter);













}

