#include<stdio.h>
main()
{
 printf("\n ~Week Number to It's Name~");
 int day;
 printf("\n Enter The Week Number=> ");
 scanf("%d",&day);
 switch(day)
 {
 case 1:
 printf("\nMonday");
 break;
 case 2:
 printf("\nTuesday");
 break;
 case 3:
 printf("\nWednesday");
 break;
 case 4:
 printf("\nThusrday");
 break;
 case 5:
 printf("\nFriday");
 break;
 case 6:
 printf("\nSaturday");
 break;
 case 7:
 printf("\nSunday");
 break;
 default:
 }
}