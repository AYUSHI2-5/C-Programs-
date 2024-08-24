#include<stdio.h>
main()
{
 printf("\n Enter Number For It's Table");
int i,no;
 printf("\n Enter Any Number Here=> ");
 scanf("%d",&no);
 for(i=1; i<=10; i++){
 printf("\n%d X %d = %d",no,i,no*i);
 }
}
