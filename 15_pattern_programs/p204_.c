#include<stdio.h>
main()
{
    int i,n,j,k;
    printf("\nEnter your limit=");
    scanf("%d",&n);
    k=n;
    for(i=0;i<n;i++)
    {    
        for(j=n;j>=i;j--)
        {
            printf("%d",k);
        }
        k--;
        {
            printf("\n");
        }
    }
}