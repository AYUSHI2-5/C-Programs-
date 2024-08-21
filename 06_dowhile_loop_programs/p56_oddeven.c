#include<stdio.h>
main()
{
    int i,n;
    
    printf("Enter limit =");
    scanf("%d",&n);
    i=1;
    do
    {
        if(i%2==0)
        {
            printf("\n %d it is even",i);
        }
        else{
            printf("\n %d it is odd",i);
        }
        i++;

    }
    while(i<=n);
    return 0;
    
}