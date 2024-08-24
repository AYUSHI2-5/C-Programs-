#include<stdio.h>
main()
{
 int i,n;
 float s=0;
 printf("\nEnter Limit=> ");
 scanf("%d",&n);
 for(i=1; i<=n; i++)
 {
 printf("+1/%d ",i);
 s=s+(float)1/i;
 }
 printf("\n Sum=> %f",s);
}
