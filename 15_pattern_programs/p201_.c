#include<stdio.h>
main()
{   int i,j,n;
    printf("Enter number=");
    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i%2);
        }
        printf("\n");
    }
}