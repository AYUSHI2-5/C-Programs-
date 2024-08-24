#include<stdio.h>
main()
{
    int no;
    dell:
    printf("\nEnter any number =");
    scanf("%d",&no);
    
    if(no>0)
    {
        printf("\nsquare of number %d",no*no);

    }
    else
    {
        goto dell;
    }
}