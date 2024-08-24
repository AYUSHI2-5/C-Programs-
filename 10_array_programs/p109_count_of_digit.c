#include<stdio.h>
int main()
{
   int ar[]={11,50,6,9,23,45,11,70,11,22,20,7,55,21};
   int n=14,i,no,c1=0;
   printf("\nEnter number =");
   scanf("%d",&no);

   for(i=0;i<n;i++)
  {
   if(ar[i]==no)
   {
      c1++;
   }

  }
  if(c1==0)
  {
   printf("\n not found");
  }
  else
  {
   printf("\n %d",c1);
  }
}
