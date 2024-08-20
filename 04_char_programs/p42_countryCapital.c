#include<stdio.h>
main()
{
 printf("\n ~Country's Capital using there First Latter~");
 char op;
 printf("\n A For Afghan");
 printf("\n B For Bangladesh");
 printf("\n C For Canada");
 printf("\n D For Dominica");
 printf("\n Select Character=> ");
 scanf("%c",&op);
 if(op=='a' || op=='A')
 {
 printf("\n It's Capital is Kabul");
 }
 else if(op=='b' || op=='B'){
 printf("\n It's Capital is Dhaka");
 }
 else if(op=='c' || op=='C'){
 printf("\n It's Capital is Ottawa");
 }
 else if(op=='d' || op=='D'){
 printf("\n It's Capital is Roseau");
 }
 else{
 printf("\n Remaining To Update");
 }
} 
