#include<stdio.h>
main()
{
 int i,no1,s=0,c=0;
 printf("\nEnter Limit=> ");
 scanf("%d",&no1);
 for(i=1; i<=no1; i++){
 if(i%2==0){
 printf("%d -",i);
 s=s+i;
 }
 else{
 printf("%d +",i);
 s=s+i;
 }
 }
 printf("\n Sum= %d",s);
}
