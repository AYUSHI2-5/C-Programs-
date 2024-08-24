#include<stdio.h>
int main()
{
    int a[]={25,-11,15,-27,-22,17};
    int b[8];
    int i,n=6;
    int k=0;
    
    for(i=0;i<n;i++)
    {
       
       
        b[k]=a[i];
        k++;
       
    }
    for(i=0;i<k;i++)
    {                                 
        if(a[i]<0)
        {
            printf("\n %d",b[i]);
        }
    }
    return 0;
    
    
    
}