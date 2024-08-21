#include<stdio.h>
main()
{
    int a,b,c;
    printf("\nEnter value of a=");
    scanf("%d",&a);
    printf("\nEnter value of b=");
    scanf("%d",&b);

    c=a;
    a=b;
    b=c;
    printf("\n a=%d b=%d",a,b);

}