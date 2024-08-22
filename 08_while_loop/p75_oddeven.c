#include<stdio.h>
main()
{
 printf("\n ~Alternative Odd Eve~");
 int i,no;
 printf("\n Enter Limit=> ");
 scanf("%d",&no);
 i=1;
 while(i<=no)
 {
    if(i%2==0)
 {
 printf("\n%d Eve",i);
 i++;
 }
 else{
 printf("\n%d Odd",i);
 i++;
 }
 }
}

 