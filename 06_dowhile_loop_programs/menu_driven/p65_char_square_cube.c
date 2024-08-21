#include<stdio.h>
main()
{
 printf("\n ~You'r First Number Will be Square & 2nd Number Will be Cube~");
 int a;
 char op;
 do
 {
 printf("\nEnter S for square");
 printf("\nEnter C for cube");
 printf("\nEnter E for exit");
 printf("\nEnter ->");
 fflush(stdin);
 scanf("%c",&op);
 if(op=='s' || op=='S')
 {
 printf("\n Enter Number=> ");
 scanf("%d",&a);
 printf("\n Square is=> %d",a*a);
 }
 else if(op=='C' || op=='c')
 {
 printf("\n Enter Number=> ");
 scanf("%d",&a);
 printf("\n Cube is=> %d",a*a*a);
 }
 else if(op=='E' || op=='e')
 {
 printf("\n See you Soon");
 }
 else
 {
 printf("\nWrong opt");
 }
 }while(op!='e');
 printf("\n");
}