#include<stdio.h>
main()
{
    int i,n,t1=0,t2=1;
    int nextterm= t1+t2;
    printf("\nEnter number of terms=");
    scanf("%d",&n);
    
    printf("fibnacci series=%d %d",t1,t2);

    for(i=3;i<=n;i++)
    {
        printf("\t%d",nextterm);
        t1=t2;
        t2=nextterm;
        nextterm=t1+t2;

    }
}