#include<stdio.h>
main()
{
    int i,no,y=0;
    
    printf("\n enter any number =");
    scanf("%d",&no);
    for(i=2;i<no;i++)
    {
        if(no%i==0)
        {
            y=1;
            break;
        }
        
    }
    if(y==0)
    {
        printf("\nit is prime number");

    }
    else
    {
        printf("\nit is not prime number");
    }
    return 0;
}