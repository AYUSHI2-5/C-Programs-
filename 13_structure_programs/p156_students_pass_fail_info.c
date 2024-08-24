#include<stdio.h>

struct student{
    int sno;
    char sname[200];
    int shindi;
    int senglish;

};
main()

{
    struct student s[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {   printf("==============================================");
        printf("\nEnter student no=>");
        scanf("%d",&s[i].sno);
        printf("==============================================");
        printf("\nEnter hindi marks =>");
        scanf("%d",&s[i].shindi);
        printf("==============================================");
        printf("\nEnter english marks =>");
        scanf("%d",&s[i].senglish);
        printf("==============================================");

        fflush(stdin);
        printf("\nEnter student sname=>");
        gets(s[i].sname);
    }

    printf("\nNo\tSname\thindi marks\tenglish marks");
    printf("\n========================");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t%s\t\t%d\t\t%d",s[i].sno,s[i].sname,s[i].shindi,s[i].senglish);
        if(s[i].shindi+s[i].senglish>50)
          {
            printf("\t pass");
          }
          else
          {
            printf("\tfail");
          }



       
    }
    return 0;



}