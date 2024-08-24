#include<stdio.h>
main()
{
 printf("\n ~Alternative Odd Eve~");
 int i,no;
 printf("\n Enter Limit=> ");
 scanf("%d",&no);
 for(i=1; i<=no; i++)
 {
 if(i%2==0)
 {
 printf("\n%d",i);
 }
 }
}
