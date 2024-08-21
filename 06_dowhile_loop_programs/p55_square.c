#include<stdio.h>
main()
{
    int i,n;
    
    printf("Enter limit =");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("\n%d - %d",i,i*i);
        i++;

    }
    while(i<=n);
    return 0;
    
}