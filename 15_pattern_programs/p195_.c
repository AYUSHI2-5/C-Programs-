#include<stdio.h>
main()
{
   int i,n,j;
   
   printf("\nEnter your limit=");
   scanf("%d",&n);
  
    
   for(i=1;i<=n;i++)
   {
    for(j=1;j<=5;j++)
    {
      printf("%d",i);  
    }
   printf("\n");
   }
}