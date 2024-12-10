#include<stdio.h>
void main()
{
       int a,*p1=&a;
       char c,*p2=&c;
       float f,*p3=&f;

       printf("enter the integer,character and float");
       scanf("%d,%c,%f",&a,&c,&f);

       printf("the address of a:%d\nthe variable of a:%p");
       printf("\nthe address of c:%p\nthe variable of c:%p");
       printf("\nthe address of f:%p\nthe variable of f:%p");

}
