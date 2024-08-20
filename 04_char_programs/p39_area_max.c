#include<stdio.h>
main()
{
printf("\n ~Using Symbol Area Max & Odd-Even");
char op;
int no,no1,no2;
float h,b,r;
printf("\n T for Area of Triangle");
printf("\n C for Area of Circle");
printf("\n M for Max");
printf("\n O or E for Odd-Even");
printf("\n");
printf("\n Enter Option Number=> ");
scanf("%c",&op);
if(op=='t' || op=='T')
{
 printf("\n Base lenght=> ");
 scanf("%f",&b);
 printf("\n Hight Lenght=> ");
 scanf("%f",&h);
 printf("\n Area Of Triangle is %.2f",(b*h)/2);
}
else if(op=='c' || op=='C')
{
 printf("\n Radius of Circle=> ");
 scanf("%f",&r);
 printf("\n Area Of Circle is %.2f",(r*r)*3.14);
}
else if(op=='m' || op=='M')
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
else if(op=='o' || op=='O' || op=='E' || op=='e')
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
else
{
 printf("\n ~Wait For Update~");
}
}