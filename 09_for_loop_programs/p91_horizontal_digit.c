#include<stdio.h>
main()
{
 int i,l,s=0;
 printf("\n Enter Limit=> ");
 scanf("%d",&l);
 for(i=1; i<=l; i++){
 printf(" %d +",i);
 s+=i;
 }
 printf("\nsum = %d",s);
}
