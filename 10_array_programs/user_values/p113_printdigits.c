#include<stdio.h>
main()
{
    int ar[100];
    int i,n;

    printf("\nEnter limit=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter value=");
        scanf("%d",&ar[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("\n%d",ar[i]);
    }
}