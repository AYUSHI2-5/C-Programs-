#include<stdio.h>
main()
{
    int i,n;
    printf("Enter limit =");
    scanf("%d",&n);
    i=0;
    do
    {
        printf("\n%d",i);
        i++;
    }
    while(i<=n);
    return 0;
}