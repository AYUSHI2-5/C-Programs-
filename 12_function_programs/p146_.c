#include<stdio.h>
void squ(int n1)
{
    printf("\n*************************");
    printf("\n square of  digits=%d",n1*n1);
    printf("\n*************************");
}
void cube(int n1)
{
    printf("\n*************************");
    printf("\n cube of  digits=%d",n1*n1*n1);
    printf("\n*************************");
}
main()
{
    int n1;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);
  
   
    squ(n1);
    cube(n1);
}