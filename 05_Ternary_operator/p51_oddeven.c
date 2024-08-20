#include<stdio.h>
main()
{
 printf("\n Odd Even Using Ternary Operator");
 int no1;
 printf("\n Enter Any Digit Here=> ");
 scanf("%d",&no1);
 (no1%2==0) ? printf("\n It is Even Number") : printf("\n It is Odd Number");
}