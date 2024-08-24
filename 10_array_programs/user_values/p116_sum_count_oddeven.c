#include<stdio.h>
main()
{
    int ar[100];
    int i,n,s=0,cnt=0,k=0;

    printf("\nEnter limit=");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter value=");
        scanf("%d",&ar[i]);
       

    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            printf("it is even =%d ",ar[i]);
            cnt++;
            s=s+ar[i];
        }
        else
        {
            printf("it is odd =%d",ar[i]);
            k++;
            s=s+ar[i];
        }
    }
    printf("\n sum=%d",s);
    printf("\nnumber of even numbers=%d",cnt);
    printf("\nnumber of odd numbers=%d",k);
}