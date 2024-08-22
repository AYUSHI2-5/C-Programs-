#include<stdio.h>
main()
{
 int no1,i;
 printf("\n Enter Table Number => ");
 scanf("%d",&no1);
 i=1;
 while(i<=10){
 printf("\n%d x %d = %d",no1,i,i*no1);
 i++;
 }
}
