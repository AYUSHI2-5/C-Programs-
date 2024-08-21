#include<stdio.h>
 int main()
{
    int no;
    int y,x=0;
    int z;
    
    printf("Enter number =>");
    scanf("%d",&no);

    z=no;
    while(no>0)
    {
        y=no%10;
        x=x+(y*y*y);
        no=no/10;
    }
    printf("%d",x);
    if(x==z)
    {
        printf("\n number is ARMSTRONG");

    }
    else
    {
        printf("\n number is not ARMSTRONG");
    }
}