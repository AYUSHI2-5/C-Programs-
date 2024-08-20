#include<stdio.h>
main()
{
    int no;
    printf("Enter year=");
    scanf("%d",&no);
    no%4==0 ? printf("\nit is leapyear"):printf("\n not a leap year");
}