#include<stdio.h>

struct student{
    int sno;
    char sname[200];

};
main()

{
    struct student s[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter s1's no=>");
        scanf("%d",&s[i].sno);

        fflush(stdin);
        printf("\nEnter s1.s sname=>");
        gets(s[i].sname);
    }

    printf("\nNo\tSname");
    printf("\n========================");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t%s",s[i].sno,s[i].sname);
    }
    return 0;



}