#include<stdio.h>

struct student{
    int sno;
    char sname[200];

};
main()

{
    struct student s1,s2,s3;

    printf("\nEnter s1's no=>");
    scanf("%d",&s1.sno);

    fflush(stdin);
    printf("\nEnter s1.s sname=>");
    gets(s1.sname);

    printf("\nEnter s2's no=>");
    scanf("%d",&s2.sno);

    fflush(stdin);
    printf("\nEnter s2.s sname=>");
    gets(s2.sname);
    
    printf("\nEnter s3's no=>");
    scanf("%d",&s3.sno);

    fflush(stdin);
    printf("\nEnter s3.s sname=>");
    gets(s3.sname);
    
    printf("\ns1's no = %d s1.sname = %s",s1.sno,s1.sname);
    printf("\ns2's no = %d s2.sname = %s",s2.sno,s2.sname);
    printf("\ns3's no = %d s3.sname = %s",s3.sno,s3.sname);
    
    return 0;



}