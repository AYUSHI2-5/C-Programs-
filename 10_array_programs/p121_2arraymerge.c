#include<stdio.h>
 int main()
{
    int a[]={1,2,3};
    int b[]={4,5};
    int c[8];
    int i,n1=3,n2=2,k;

    for(i=0;i<n1;i++)
{
    c[k]=a[i];
    k++;

}
    for(i=0;i<n2;i++)
{
    c[n1+i]=b[i];
    k++;

}
for(i=0;i<n1+n2;i++)
{
    printf("\n %d",c[i]);
}

    
}