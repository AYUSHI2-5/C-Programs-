#include<stdio.h>
main()
{
 printf("\n ~Let's Check It's Vowel or Not~");
 char op;
 printf("\n Enter Any Latter Here=> ");
 scanf("%c",&op);
 if(op=='a' || op=='A' || op=='e' || op=='E' || op=='i' || op=='I' || op=='O' || op=='o' || op=='u' || op=='U')
{
 printf("\n It's Vowel Latter");
}
 else
 {
 printf("\n It's Not Vowel");
 }
}