#include<stdio.h>
main()
{
 printf("\n Menu Using Switch & Default");
 char op;
 printf("\n P for Pizza ");
 printf("\n I for Idli ");
 printf("\n S For Sandwitch ");
 printf("\n A for Apple Pie ");
 printf("\n Select You'r Option ");
 scanf("%c",&op);
 switch(op){
 case 'p':
 printf("\n Pizza For 400/-");
 break;
case 'i':
 printf("\n Idli For 60/-");
 break;
 case 's':
 printf("\n Sandwitch For 110/-");
 break;
 case 'a':
 printf("\n Apple Pie for 200/-");
 break;
 default:
 printf("\n There No Item Like this");
 }
}
