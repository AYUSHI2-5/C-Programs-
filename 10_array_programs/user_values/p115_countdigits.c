#include<stdio.h>
main()
{
    int ar[100];
    int i,n,cnt=0;

    printf("\nEnter limit=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter value=");
        scanf("%d",&ar[i]);

    }
    for(i=0;i<n;i++)
    {
        printf("%d",ar[i]);
        cnt++;
    }
}