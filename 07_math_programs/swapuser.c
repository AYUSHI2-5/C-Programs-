#include<stdio.h>
main()
{
    int a,b;

    printf("\nEnter number 1=>");
    scanf("%d",&a);
    printf("\nEnter number 2=>");
    scanf("%d",&b);

    printf("\nbefore swap a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swap a=%d b=%d",a,b);
}