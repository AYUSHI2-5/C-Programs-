#include<stdio.h>
main()
{
    int i,n,j;
    printf("\nEnter your limit=");
    scanf("%d",&n);
    int k=n;
    for(i=1;i<=n;i++)
    {   
        for(j=1;j<=i;j++)
        {
            printf("%d",k);
            
        }
        k--;
        
            printf("\n");
        
    }
}