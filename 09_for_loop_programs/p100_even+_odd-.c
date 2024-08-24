#include<stdio.h>
main()
{
    	int i,n;
	
	printf("\nEnter limit =>");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++){
		if(i%2==0)
        {
            printf(" %d +",i);
            
        }
        else
        {
            printf(" %d -",i);
        }
}

return 0;
}