#include<stdio.h>
main()
{
 printf("\n ~Calculator~");
 char op;
 float b,c;
 printf("\n Enter Number + for Addition");
 printf("\n Enter Number - for Substation");
 printf("\n Enter Number / for Division");
 printf("\n Enter Number * for Multiplication");
 printf("\n");
 printf("\n Enter Number=>");
 scanf("%c",&op);
 if(op=='+')
 {
 printf("\n Enter 1st Number=> ");
 scanf("%f",&b);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&c);
 printf("\n It's Addtion will be=> %.2f",b+c);
 }
 else if(op=='-')
 {
 printf("\n Enter 1st Number=> ");
 scanf("%f",&b);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&c);
 printf("\n It's Substraction will be=> %.2f",b-c);
 }
 else if(op=='/')
 {
 printf("\n Enter 1st Number=> ");
 scanf("%f",&b);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&c);
 printf("\n It's Division will be=> %.2f",b/c);
 }
 else if(op=='*')
 {
 printf("\n Enter 1st Number=> ");
 scanf("%f",&b);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&c);
 printf("\n It's Multiplication will be=> %.2f",b*c);
 }
 else
 {
 printf("\n Use Latest Version");
 }
}
 