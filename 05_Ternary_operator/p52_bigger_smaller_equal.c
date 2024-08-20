#include<stdio.h>
main()
{
 printf("\n Maximum Using Ternary Operator");
 int no1,no2;
 printf("\n Enter 1st Number=> ");
 scanf("%d",&no1);
 printf("\n Enter 2nd Number=> ");
 scanf("%d",&no2);
 (no1>no2) ? printf("\n 1st Number is Bigger") : ((no2>no1) ? printf("\n 2nd Number Is Biger") : 
 printf("\n Both Are Equal"));
}
