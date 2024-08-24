#include<stdio.h>
main()
{
 int i,no1,s=1;
 printf("\n Enter limit=> ");
 scanf("%d",&no1);
 for(i=1; i<=no1; i++)
 {
 printf(" %d *",i);
 s=i*s;
 }
 printf("\n Factorial is %d",s);
}
