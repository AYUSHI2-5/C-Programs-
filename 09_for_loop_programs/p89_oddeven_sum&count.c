#include<stdio.h>
main()
{
 int i,no1,se=0,ce=0,so=0,co=0;
 printf("\n Enter Limit=> ");
 scanf("%d",&no1);
 for(i=1; i<=no1; i++)
 {
 if(i%2==0){
 printf("\n Eve %d",i);
 se=se+i;
 ce=ce+1;
 }
 else{
 printf("\n Odd %d",i);
 so=so+i;
 co=co+1;
 }
 }
 printf("\n Sum of Eve= %d Count of Eve=> %d",se,ce);
 printf("\n Sum of Odd= %d Count of Odd=> %d",so,co);
}