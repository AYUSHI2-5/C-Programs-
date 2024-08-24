#include<stdio.h>
#define N 3
int main()
{
    int a[N][N];
    int b[N][N];
    int i,j,k;
    int multi[N][N];

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
    printf("\nmultiplication of matrix=");
    printf("\n=======================================================");
    printf("\n");
     for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
          multi[i][j]=0;
          for(k=0;k<N;k++)
          {
            multi[i][j]+=a[i][k]*b[k][j];
          }

        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",multi[i][j]);    
        }
        printf("\n");
    }
    return 0;
}

