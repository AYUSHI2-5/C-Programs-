#include<stdio.h>
main()
{
 printf("\n Positive Negative Using Ternary Operator");
 int no1;
 printf("\n Enter digit here=> ");
 scanf("%d",&no1);
 (no1>0) ? printf("\n Positive Number") : printf("\n Negative Number");
}