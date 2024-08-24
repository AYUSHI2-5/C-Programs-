#include<stdio.h>
mian()
{
    int i,j,n;
    
    printf("\nEnter your name =");
    scanf("%d",&n);
    int k=n;

    for(i=0;i<=n;i++)
    {
    for(j=1;j<=i;j++)
    {
        printf("%d",k);
        
    }
    k--;
    printf("\n");
    }

}