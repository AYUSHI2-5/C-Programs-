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
    int n,i,c1=0,c2=0;

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
    printf("\n=======================================================");
    for(i=0;i<n;i++)
    {   
        printf("\n%d\t\t%s\t\t%d\t\t%d",s[i].sno,s[i].sname,s[i].shindi,s[i].senglish);
        if(s[i].shindi+s[i].senglish>50)
          {
            printf("\t pass");
            c1++;
          }
          else
          {
            printf("\tfail");
            c2++;
          }
       
    }
    printf("\ncount of passing students=%d",c1);
     printf("\ncount of failed students=%d",c2);
    return 0;



}