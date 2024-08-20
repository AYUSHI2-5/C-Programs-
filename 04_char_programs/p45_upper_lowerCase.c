#include<stdio.h>
main()
{
 char l;
 printf("\n Enter Anything Here=> ");
 scanf("%c",&l);
 if(isupper(l))
 {
 printf("\n It's In Upper Case");
 }
 else if(islower(l))
 {
 printf("\n It's In Lower Case");
 }
 else
 {
 printf("\n It's Something Else");
 }
}
