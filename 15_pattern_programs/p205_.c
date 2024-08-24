#include<stdio.h>
main()
{
    int i,n,j;
    printf("\nEnter your limit=");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {   int k=1;
        for(j=n;j>=i;j--)
        {
            printf("%d",k);
            k++;
        }
        
        
            printf("\n");
        
    }
}