#include<stdio.h>
main()
{
    int a[]={1,2,3};
    int b[]={4,5,6};
    int c[]={7,8};
    int d[15];
    int i,n1=3,n2=3,n3=2,k=0;

    for(i=0;i<n1;i++)
    {
        d[k]=a[i];
        k++;
    }
    for(i=0;i<n2;i++)
    {
        d[n1+i]=b[i];
        k++;
    }
    for(i=0;i<n3;i++)
    {
        d[n1+n2+i]=c[i];
        k++;
    }
    for(i=0;i<n1+n2+n3;i++)
    {
        printf("\n %d",d[i]);
    }
}