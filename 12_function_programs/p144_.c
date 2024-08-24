#include<stdio.h>
void add(int n1,int n2) //function with argument
{
    printf("\n sum of both the digits=%d",n1+n2);
    printf("\n*************************");
}
void sub(int n1,int n2)
{
    printf("\n sum of both the digits=%d",n1-n2);
    printf("\n*************************");
}
void mult(int n1,int n2)
{
    printf("\n sum of both the digits=%d",n1*n2);
    printf("\n*************************");
}
void div(int n1,int n2)
{
    printf("\n sum of both the digits=%d",n1/n2);
    printf("\n*************************");
}
main()
{
     int n1,n2,total;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);
    printf("\nEnter second number=");
    scanf("%d",&n2);
   
    add(n1,n2);
    sub(n1,n2);
    mult(n1,n2);
    div(n1,n2);
}