#include<stdio.h>
main()
{
 int i,n=20,se,c=0;
 int a[100]={11,7,99,14,22,110,5,66,2,21,22,34,22,23,25,64,22,22,21,21};
 printf("\n What Value You have to Search=> ");
 scanf("%d",&se);
 for(i=0; i<n; i++)
 {
 if(a[i]==se)
 {
 c++;
 }
 }
 if(c==0)
 {
 printf("\n No Entry Like this");
 }
 else
 {
 printf("\n Count is=> %d",c);
 }
}