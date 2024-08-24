#include<stdio.h>
void add()

{
    int n1,n2,total;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);
    printf("\nEnter second number=");
    scanf("%d",&n2);
    
    printf("\n sum of both the digits=%d",n1+n2);
    printf("\n*************************");


}
void sub()


{
    int n1,n2,total;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);
    printf("\nEnter second number=");
    scanf("%d",&n2);
    
    printf("\n sum of both the digits=%d",n1-n2);
    printf("\n*************************");


}
void mult()

{
      int n1,n2,total;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);
    printf("\nEnter second number=");
    scanf("%d",&n2);
    
    printf("\n sum of both the digits=%d",n1*n2);
    printf("\n*************************");

}
void div()
{
      int n1,n2,total;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);
    printf("\nEnter second number=");
    scanf("%d",&n2);
    
    printf("\n sum of both the digits=%d",n1/n2);
    printf("\n*************************");

}
main()
{
    add();
    sub();
    mult();
    div();
}