// program to create a simple a calculator
#include<stdio.h>

int main()
{
    int number1,number2,result;
    char operator;

     printf("please enter the operator");
    scanf("%c",& operator);


    printf("please enter the 2 numbers");
    scanf("%d%d",&number1,&number2);




    switch (operator)
    {
        case '+':result=number1+number2;
            printf("result is %d+%d=%d",number1,number2,result);

            break;

        case '*':result=number1*number2;
            printf("result is %d*%d=%d",number1,number2,result);

            break;

        case '-':result=number1-number2;
            printf("result is %d-%d=%d",number1,number2,result);

            break;

        case '/':if(number2!=0)

        {
             result=(float)number1/number2;
            printf("result: %f",(float)number1/number2);


            break;
        }
        case'%':if(number2!=0)

        {
             result=number1%number2;
            printf("result: %d",number1%number2);


            break;
        }






    }
















}
