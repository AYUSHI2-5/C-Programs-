#include<stdio.h>
main()
{
 printf("\n Square And Cube");
 int i,no;
 printf("\n Enter Limit=> ");
 scanf("%d",&no);
 for(i=1; i<=no; i++)
 {
 printf("\n%d Square=> %d Cube=> %d",i,i*i,i*i*i);
 }
}