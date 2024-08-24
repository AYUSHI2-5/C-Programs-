#include<stdio.h>
#define N 3
int main()
{
    int a[N][N];
    int b[N][N];
    int i,j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\nEnter value=>");
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("\nEnter value=>");
            scanf("%d",&b[i][j]);

        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf(" %d",b[i][j]);
        }
        printf("\n");
    }
    printf("**************");
    printf("\nAddition=>\t\t");
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf(" %d",a[i][j]+b[i][j]);
        }
       printf("\n\t\t\t");
    }
   

    return 0;
}