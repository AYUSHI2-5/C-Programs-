#include<stdio.h>
main()
{
 printf("\n ~It's Divisible 7~");
 int no,i;
 printf("\n Enter limit => ");
 scanf("%d",&no);
 for(i=1; i<=no; i++)
 {
 if(i%7==0){
 printf("\n %d",i);
 }
 }
}
