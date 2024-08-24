#include<stdio.h>
main()
{
 int i,no1,s=0,c=0;
 printf("\n Enter Limit=> ");
 scanf("%d",&no1);
 for(i=1; i<=no1; i++)
 {
 if(i%2==0){
 printf("\n %d",i);
 s=s+i;
 c=c+1;
 }
 }
 printf("\n Sum= %d Count=> %d",s,c);
}
