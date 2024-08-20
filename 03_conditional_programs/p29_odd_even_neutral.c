#include<stdio.h>
main()
{
 printf("\n You'r Number is Neutral Or Odd Or Even");
 int n;
 printf("\n Enter You's Number=> ");
 scanf("%d",&n);
 if(n==0)
 {
 printf("\n You'r Number is Neutral");
 }
 else if(n%2==0)
 {
 printf("\n You'r Number is Even");
 }
 else if(n%2!=0)
 {
 printf("\n You'r Number is Odd");
 }
}