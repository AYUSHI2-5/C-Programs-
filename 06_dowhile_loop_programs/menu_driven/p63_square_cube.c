#include<stdio.h>

 int main()
{
	int no,c,s,n1;
	do
	{
		printf("\n press 1 for cube =");
	printf("\n press 2 for square =");
	printf("\n press 3 for exit");
	printf("\n Enter number =");
	scanf("%d",&no);
	
    if(no==1)
    {
    	printf("\nEnter number =");
    	scanf("%d",&n1);
    	
    	printf("\ncube of number =%d",n1*n1*n1);
	}
	else if(no==2)
	{
			printf("\nEnter number =");
    	scanf("%d",&n1);
    	
    	printf("\ncube of number =%d",n1*n1);
	}
	else if(no==3)
	{
		printf("\n bye");
		
	}
	else
	{
		printf("\n wrong choice");
	}
	
	
}
while(no!=23);

}