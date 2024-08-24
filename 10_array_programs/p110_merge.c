#include<stdio.h>
main()
{
    int a[]={1,2,3,4};
    int b[10];
    int n=4,i;

    for(i=0;i<n;i++)
    {
   b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        printf("\n %d",b[i]);
    }

    
}