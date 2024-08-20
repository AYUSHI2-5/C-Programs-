#include<stdio.h>
main()
{
printf("~Calculator Using Switch-Case-Default~");
char op;
float no1,no2;
printf("\n + For Addition");
printf("\n - For Substraction");
printf("\n / For Division");
printf("\n * For Multiplication");
printf("\n Select You'r Option=> ");
scanf("%c",&op);
switch(op)
{
 case '+':
 printf("\n Enter 1st Number=> ");
 scanf("%f",&no1);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&no2);
 printf("\n Your Addition is=> %f",no1+no2);
 break;
 case '-':
 printf("\n Enter 1st Number=> ");
 scanf("%f",&no1);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&no2);
 printf("\n Your Subtraction is=> %f",no1-no2);
 break;
 case '/':
 printf("\n Enter 1st Number=> ");
 scanf("%f",&no1);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&no2);
 printf("\n Your Division is=> %f",no1/no2);
 break;
 case '*':
 printf("\n Enter 1st Number=> ");
 scanf("%f",&no1);
 printf("\n Enter 2nd Number=> ");
 scanf("%f",&no2);
 printf("\n Your Multiplication is=> %f",no1*no2);
 break;
default:
 printf("\n Wait For Update");
}
}
