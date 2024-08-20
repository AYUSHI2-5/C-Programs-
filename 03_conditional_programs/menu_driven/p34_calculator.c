#include<stdio.h>
main()
{
 printf("\n ~Calculater~");
 int a;
 float b,c;
 printf("\n Enter Number 1 for Addtion");
 printf("\n Enter Number 2 for Substration");
 printf("\n Enter Number 3 for Division");
 printf("\n Enter Number 4 for Multiplication");
 printf("\n");
 printf("\n Enter Number=>");
 scanf("%d",&a);
 if(a==1)
 {
 printf("\n Enter 1st Number=> ");
 scanf("%f",&b);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&c);
 printf("\n It's Addtion will be=> %.2f",b+c);
 }
 else if(a==2)
 {
 printf("\n Enter 1st Number=> ");
 scanf("%f",&b);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&c);
 printf("\n It's Substraction will be=> %.2f",b-c);
 }
 else if(a==3)
 {
 printf("\n Enter 1st Number=> ");
 scanf("%f",&b);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&c);
 printf("\n It's Division will be=> %.2f",b/c);
 }
 
 else if(a==4)
 {
 printf("\n Enter 1st Number=> ");
 scanf("%f",&b);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&c);
 printf("\n It's Multiplication will be=> %.2f",b*c);
 }
 else
 {
 printf("\n Use Letest Virsion");
 }
}


