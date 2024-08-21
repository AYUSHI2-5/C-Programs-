#include<stdio.h>
main()
{
    int i,n,s=1;
    
    printf("Enter limit =");
    scanf("%d",&n);
    i=n;
    do
    {
        printf("\n%d x",i);
        s=s*i;
        i--;

    }
    while(i>=1);
    printf("\n %d",s);
    return 0;
    
}