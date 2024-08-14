#include<stdio.h>
main()
{
 float Monday,Tuesday,Wednesday,Thursday,Friday;
 printf("\n Enter temp Monday =>");
 scanf("%f",&Monday);
 printf("\n Tuesday =>");
 scanf("%f",&Tuesday);
 printf("\n Wednesday =>");
 scanf("%f",&Wednesday);
 printf("\n Thursday =>");
 scanf("%f",&Thursday);
 printf("\n Friday =>");
 scanf("%f",&Friday);
 printf("\n ~Temp Record~");
 printf("\nTotal = %f",Monday+Tuesday+Wednesday+Thursday+Friday);
 printf("\nAvg = %f",(Monday+Tuesday+Wednesday+Thursday+Friday)/5);
}