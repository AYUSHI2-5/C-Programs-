#include<stdio.h>
main()
{
    int a[5]={11,20,30,44,5};
    int *ptr,i;
    ptr=a;
    for(i=0;i<5;i++)
    {
        printf("\n%d",*ptr);
    }
}