#include<stdio.h>
main()
{
 int i,n=5,k=0,z=0;
 int a[5]={12,43,25,57,34};
 int b[5];
 int c[5];
 for(i=0; i<n; i++)
 {
 if(a[i]%2==0)
 {
 b[k]=a[i];
 k++;
 }
 else
 {
 c[z]=a[i];
 z++;
 }
 }
 for(i=0; i<k; i++)
 {
 printf("\n %d Even",b[i]);
 }
 for(i=0; i<z; i++)
 {
 printf("\n %d Odd",c[i]);
 }
}
