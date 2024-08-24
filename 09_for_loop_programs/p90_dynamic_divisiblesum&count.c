#include<stdio.h>
main()
{
 int i,l,s=0,c=0,no1;
 printf("\n Enter Limit=> ");
 scanf("%d",&l);
 printf("\n With Which It can divide=> ");
 scanf("%d",&no1);
 for(i=1; i<=l; i++){
 if(i%no1==0)
 {
 printf("\n %d",i);
 s=s+i;
 c=c+1;
 }
 }
 printf("\n Sum=> %d Count=> %d ",s,c);
}