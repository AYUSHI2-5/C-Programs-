#include<stdio.h>
main()
{
 int a[]={11,22,33};
 int b[]={10,20,30};
 int n=3,i;

for(i=0;i<n;i++)
{
    printf("\n%d\t%d\t%d",a[i],b[i],a[i]+b[i]);
}


}