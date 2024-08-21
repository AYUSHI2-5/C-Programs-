#include<stdio.h>
main()
{
    int no;
    int y,x=0;
    printf("Enter number =>");
    scanf("%d",&no);

    while(no>0)
    {
        y=no%10;
        x=x*10+y;
        no=no/10;
    }
    printf("\nx=%d",x);
}