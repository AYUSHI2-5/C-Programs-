#include<stdio.h>
main()
{
 int i,n=13,sp=0,cp=0,sn=0,cn=0;
 int a[100]={-11,-7,99,14,-22,110,-45,66,-2,21,-22,34,22};
 for(i=0; i<n; i++)
 {
 if(a[i]>0)
 {
 printf("\n Positive %d",a[i]);
 sp=sp+a[i];
 cp++;
 }
 else
 {
 printf("\n Negative %d",a[i]);
 sn=sn+a[i];
 cn++;
 }
 }
 printf("\n Sum of Positve=> %d Sum of Positive=> %d",sp,cp);
 printf("\n Sum of Negative=> %d Sum of Negative=> %d",sn,cn);
}
