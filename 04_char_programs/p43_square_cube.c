#include<stdio.h>
main()
{
 printf("\n ~S for Squre & C for Cube~");
 int a;
 char op;
 printf("\nEnter s for square");
 printf("\nEnter c for cube");
 printf("\nEnter ->");
 scanf("%c",&op);
 if(op=='s' || op=='S')
 {
 printf("\n Enter Number=> ");
 scanf("%d",&a);
 printf("\n Square is=> %d",a*a);
 }
 else if(op=='c' || op=='C')
 {
 printf("\n Enter Number=> ");
 scanf("%d",&a);
 printf("\n Cube is=> %d",a*a*a);
 }
 else
 {
 printf("\nWrong opt");
 }
 }


