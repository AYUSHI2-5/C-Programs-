#include<stdio.h>
main()
{
 int i,n=5;
 int a[5]={178,28,63,49,15};
 int b[10];
 for(i=0; i<n; i++)
 {
 b[i]=a[i]*a[i];
 }
 for(i=0; i<n; i++)
 {
 printf("\n %d Square Is %d",a[i],b[i]);
 }
}
