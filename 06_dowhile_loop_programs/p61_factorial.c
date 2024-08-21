#include<stdio.h>
main()
{
    int i,n;
    
    printf("Enter limit =");
    scanf("%d",&n);
    i=1;
    do
    {
        printf("%dx",i);
        i++;

    }
    while(i<=n);
    return 0;
    
}