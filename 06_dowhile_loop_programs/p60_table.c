#include<stdio.h>
main()
{
    int i,n;
    
    printf("Enter limit =");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("\n%d x %d= %d",n,i,i*n);
        i++;

    }
    while(i<=10);
    return 0;
    
}