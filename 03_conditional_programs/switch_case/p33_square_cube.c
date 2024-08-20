#include<stdio.h>
main()
{
printf("\n Square & Cube Using Switch Case Default ");
 int op,no1;
 printf("\n 1 for Square & 2 For Cube");
 printf("\n Select Opt=> ");
 scanf("%d",&op);
 switch(op){
 case 1:
 printf("\n Enter Number Here=> ");
 scanf("%d",&no1);
 printf("\n You'r Square is=> %d",no1*no1);
 break;
 case 2:
 printf("\n Enter Number Here=> ");
 scanf("%d",&no1);
 printf("\n You'r Cube is=> %d",no1*no1*no1);
 break;
 default:
 printf("\n No OPT like this");
}
}