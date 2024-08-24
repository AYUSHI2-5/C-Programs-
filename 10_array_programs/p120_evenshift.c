#include<stdio.h>
int main()
{
    int a[]={11,50,6,9,23,45,11,70,11,22,20,7,55,21};
    int b[14];
    int n=14,i,c1=0;

    for(i=0;i<n;i++)
    {
        
   if(a[i]%2==0)
    {
        b[c1]=a[i];
        c1++;
    }

    }
    for(i=0;i<c1;i++)
    {
    
       printf("\n %d",b[i]);
    }
   
    return 0;

    
}