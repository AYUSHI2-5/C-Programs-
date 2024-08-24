#include<stdio.h>

struct student{
    int sno,smarksH,smarksE,stotal,srl;
    char sname[200];

};
main()

{
    struct student s[100];
    int n,i,opt;

    printf("\nEnter limit =>");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("\nEnter rollno=>");
        scanf("%d",&s[i].srl);
        fflush(stdin);
        printf("\nEnter s's sname=>");
        gets(s[i].sname);
        printf("\nEnter s's marks in hindi=>");
        scanf("%d",&s[i].smarksH);
        printf("\nEnter s's marks in English=> ");
        scanf("%d",&s[i].smarksE);
        printf("\n\n**");  
    }
    
    printf("\nNo\t\tName\t\tHindi\t\tEnglish\t\tTotal\t\tStatus");
    printf("\n\n================================================================================================");

    int rl,x=0;
    printf("\nEnter rollno=");
    scanf("%d",&rl);
   
         for(i=0;i<n;i++)
         {   
            if(rl==s[i].srl)
            {
                s[i].stotal=s[i].smarksH+s[i].smarksE;
               printf("\n%d\t\t%s\t\t%d\t\t%d\t\t%d",s[i].sno,s[i].sname,s[i].smarksH,s[i].smarksE,s[i].stotal);
               x=1;
            }
         }
    if(x==0)
    {
       printf("not found");
    }

   }