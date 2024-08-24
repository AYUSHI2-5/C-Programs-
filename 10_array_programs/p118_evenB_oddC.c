#include<stdio.h>
main()
{
int a[]={11,50,6,9,23,45,11,70,11,22,20,7,55,21};
int b[14];
int c[20];
int n=14,i;
int c1=0,c2=0;
    
for(i=0;i<n;i++)
{
        
 if(a[i]%2==0)
{
  b[c1]=a[i];
  c1++;            

}
  else
{
c[c2]=a[i];
c2++;
}
      
}
for(i=0;i<c1;i++)
{
 
printf(" B=%d",b[i]);
      
}
for(i=0;i<c2;i++)
{

printf("\t C=%d",c[i]); 

}
}
