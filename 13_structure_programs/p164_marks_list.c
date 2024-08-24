#include<stdio.h>

struct student{
    int sno;
    char sname[200];
    int shindi,senglish;
};
main()

{
    struct student s1,s2,s3;
    printf("\n***********************************************************");
    printf("\nEnter s1's no=>");
    scanf("%d",&s1.sno);
    printf("\nEnter s1's  hindi marks=>");
    scanf("%d",&s1.shindi);

    printf("\nEnter s1's  english marks=>");
    scanf("%d",&s1.senglish);


    fflush(stdin);
    printf("\nEnter s1.s sname=>");
    gets(s1.sname);
    printf("\n***********************************************************");
    printf("\nEnter s2's no=>");
    scanf("%d",&s2.sno);
    printf("\nEnter s2's hindi marks=>");
    scanf("%d",&s2.shindi);

    printf("\nEnter s2's english marks=>");
    scanf("%d",&s2.senglish);


    fflush(stdin);
    printf("\nEnter s2.s sname=>");
    gets(s2.sname);
    printf("\n***********************************************************");
    printf("\nEnter s3's no=>");
    scanf("%d",&s3.sno);
    printf("\nEnter s3's hindi marks=>");
    scanf("%d",&s3.shindi);
    printf("\nEnter s3's english marks=>");
    scanf("%d",&s3.senglish);



    fflush(stdin);
    printf("\nEnter s3.s sname=>");
    gets(s3.sname);
    
    printf("\ns1's no = %d \t name = %s\t  hindi=%d \tenglish=%d ",s1.sno,s1.sname,s1.shindi,s1.senglish);
    printf("\ns2's no = %d \t name = %s\t hindi=%d \tenglish=%d",s2.sno,s2.sname,s2.shindi,s2.senglish);
    printf("\ns3's no = %d \t name = %s\thindi=%d \tenglish=%d",s3.sno,s3.sname,s3.shindi,s3.senglish);
    
    return 0;



}