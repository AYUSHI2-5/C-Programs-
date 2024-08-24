#include<stdio.h>
#define N 3
int main()
{
    int a[N][N];
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

    printf("\n\n");
for(i=0;i<N;i++)
{
    for(j=0;j<N;j++)
    {   
     printf("\t%d",a[j][i]);
          
    }
    printf("\n");
}
}