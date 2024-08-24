#include<stdio.h>

struct student{
    int sno,smarksH,smarksE,stotal;
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
        printf("\nEnter s's no=>");
        scanf("%d",&s[i].sno);
        fflush(stdin);
        printf("\nEnter s's sname=>");
        gets(s[i].sname);
        printf("\nEnter s's marks in hindi=>");
        scanf("%d",&s[i].smarksH);
        printf("\nEnter s's marks in English=> ");
        scanf("%d",&s[i].smarksE);
        printf("\n\n**");

        
    }
        printf("\nPress 1 for passed students!");
        printf("\nPress 2 for failed students!");
        printf("\nPress 3 for both!");
        printf("\n\n-------------------------------------------");
        printf("\n\n Select any option=>");
        scanf("%d",&opt);

        printf("\nNo\t\tName\t\tHindi\t\tEnglish\t\tTotal\t\tStatus");
        printf("\n\n================================================================================================");

        if(opt==1)
        {
             for(i=0;i<n;i++)
                {   
                if(s[i].smarksH+s[i].smarksE>50)
                {
                    

                    s[i].stotal=s[i].smarksH+s[i].smarksE;
                    printf("\n%d\t\t%s\t\t%d\t\t%d\t\t%d",s[i].sno,s[i].sname,s[i].smarksH,s[i].smarksE,s[i].stotal);
                    printf("\t\tPass :D");
                }
                }
        }
        else if(opt==2)
        {
             for(i=0;i<n;i++)
        {   
      
                if(s[i].smarksH+s[i].smarksE<50)
                {

                s[i].stotal=s[i].smarksH+s[i].smarksE;
                printf("\n%d\t\t%s\t\t%d\t\t%d\t\t%d",s[i].sno,s[i].sname,s[i].smarksH,s[i].smarksE,s[i].stotal); 
                printf("\t\tFail :(");
                }
                }
        }
        else if(opt==3)
        {
            for(i=0;i<n;i++)
            {  
                s[i].stotal=s[i].smarksH+s[i].smarksE; 
                printf("\n%d\t\t%s\t\t%d\t\t%d\t\t%d",s[i].sno,s[i].sname,s[i].smarksH,s[i].smarksE,s[i].stotal);

                if(s[i].smarksH+s[i].smarksE>50)
                {
                    printf("\t\tPass :D");
                }
                else 
                {
                    printf("\t\tFail :(");
                }
            }
            }
    return 0;

    }