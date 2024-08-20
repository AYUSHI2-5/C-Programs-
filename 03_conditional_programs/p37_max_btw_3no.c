#include<stdio.h>
main()
{
 printf("\n ~Max Out Of 3~");
 int no1,no2,no3;
 printf("\n Enter 1st Number=> ");
 scanf("%d",&no1);
 printf("\n Enter 2nd Number=> ");
 scanf("%d",&no2);
 printf("\n Enter 3rd Number=> ");
 scanf("%d",&no3);
 if(no1>no2 && no1>no3){
 printf("\n Number 1 Max");
 }
 else if(no1<no2 && no2>no3){
 printf("\n Number 2 Max");
 }
 else if(no1<no3 && no2<no3){
 printf("\n Number 3 Max");
 }
}
