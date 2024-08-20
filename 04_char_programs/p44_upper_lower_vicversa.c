#include<stdio.h>
main()
{
 char l;
 printf("\n Enter Anything Here=> ");
 scanf("%c",&l);
 if(isupper(l))
 {
 printf("\n%c",tolower(l));
 }
 else if(islower(l))
 {
 printf("\n%c",toupper(l));
 }
 else
 {
 printf("\n It's Something Else");
 }
 
 
}
