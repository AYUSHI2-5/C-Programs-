#include<stdio.h>
main()
{
printf("\n ~Area Max & Odd-Even");
int no,op,no1,no2;
float h,b,r;
printf("\n 1 for Area of Triangle");
printf("\n 2 for Area of Circle");
printf("\n 3 for Max");
printf("\n 4 for Odd-Even");
printf("\n");
printf("\n Enter Option Number=> ");
scanf("%d",&op);
if(op==1)
{
 printf("\n Base lenght=> ");
 scanf("%f",&b);
 printf("\n Hight Lenght=> ");
 scanf("%f",&h);
 printf("\n Area Of Triangle is %.2f",(b*h)/2);
}
else if(op==2)
{
 printf("\n Radius of Circle=> ");
 scanf("%f",&r);
 printf("\n Area Of Circle is %.2f",(r*r)*3.14);
}
else if(op==3)
{
 printf("\n Enter 1st Number=> ");
 scanf("%d",&no1);
 printf("\n Enter 2nd Number=> ");
 scanf("%d",&no2);
 if(no1>no2){
 printf("\n 1st Number Is bigger");
 }
 else{
 printf("\n 2nd Number Is max");
 }
}
else if(op==4)
{
 printf("\n Enter Number=> ");
 scanf("%d",&no);
 if(no%2==0)
 {
 printf("\n It is Even Number");
 }
 else
 {
 printf("\n It Is Odd Number");
 }
}
else{
 printf("\n ~Wait For Update~");
}
printf("\n");
}
