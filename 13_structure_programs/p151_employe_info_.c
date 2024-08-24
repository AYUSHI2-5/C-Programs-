#include<stdio.h>

struct employ{
    int eno;
    int esal;
    char ename[200];

};
main()

{
    struct employ e[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter employ no=>");
        scanf("%d",&e[i].eno);

        printf("\nEnter employ salary=>");
        scanf("%d",&e[i].esal);
        fflush(stdin);
        printf("\nEnter employe sname=>");
        gets(e[i].ename);
    }

    printf("\nNo\tname\tsalary");
    printf("\n========================");
    for(i=0;i<n;i++)
    {   
         if(e[i].esal>20000)
    {
        printf("\nGood!");
        printf("\n%d\t%s\t%d",e[i].eno,e[i].ename,e[i].esal);
    }
        
    }
   
    return 0;



}