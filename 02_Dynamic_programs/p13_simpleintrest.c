#include<stdio.h>
main()
{
 int p;
 float r,t;
 printf("\nEnter principle value =>");
 scanf("%d",&p);
 printf("\nEnter Rate=>");
 scanf("%f",&r);
 printf("\nEnter Time duration =>");
 scanf("%f",&t);
 printf("\n ~Simple Intrest = %.2f",(p*r*t)/100);
}