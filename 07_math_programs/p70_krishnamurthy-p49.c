#include<stdio.h>
 int main()
{
    int no;
    int y,x=0;
    int z,i;
    unsigned long long factorial=1;
    
    printf("Enter number =>");
    scanf("%d",&no);

    z=no;
    while(no>0)
    {
        y=no%10;
        factorial=1;
        for(i=1;i<=y;i++)
       
    
    
        {
            factorial=factorial*i;
        }
    
    x=x+factorial;
    no=no/10;
}
    if(x==z)
    {
        printf("\n it is krishnamurthy number");
    }
    else
    {
        printf("\n it is not krishnamurthy number");

    }
    }