#include<stdio.h>
main()
{
    int i,n,j;
    printf("\nEnter your limit=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf("*");
        }
        {
            printf("\n");
        }
    }
}