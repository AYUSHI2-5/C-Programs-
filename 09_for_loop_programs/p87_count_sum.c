#include <stdio.h>
main() {
 int no=30;
 int i,s=0,c=0;
 for(i=1;i<=no;i++)
 {
 if(i%7==0)
 {
 printf("\n%d",i);
 s=s+i;
 c=c+1;
 }
 }
 printf("\n Sum = %d Count = %d",s,c);
}
