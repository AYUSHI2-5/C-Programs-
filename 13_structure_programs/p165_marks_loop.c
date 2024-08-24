#include<stdio.h>
struct stu
{
    char name[100];
    int no;
    int hindi,english,gujrati,maths;

};  
main()
{
    int i,n,opt;
    struct stu s[100];
    int c1=0,c2=0;
    float per;

    printf("Enter the number of students who all had given the exam=");
    scanf("%d",&n);
    printf("\n===========================================================================================");
    for(i=0;i<n;i++)
    {
        printf("\nEnter roll number=");
        scanf("%d",&s[i].no);


        fflush(stdin);
        printf("\nEnter name =");
        gets(s[i].name);
        printf("\nEnter hindi marks=");
        scanf("%d",&s[i].hindi);
        printf("\nEnter english marks=");
        scanf("%d",&s[i].english);
        printf("\nEnter gujrati marks=");
        scanf("%d",&s[i].gujrati);
        printf("\nEnter maths marks=");
        scanf("%d",&s[i].maths);
    }
    printf("\n=========================================================================================================================================================================================================");
    printf("\nrollno \tname \thindimarks \tenglishmarks \tgujratimarks \tmathsmarks \ttotalmarks \tobtain percentage");
    printf("\n=========================================================================================================================================================================================================");
    for(i=0;i<n;i++)
    {
        per=((s[i].hindi+s[i].english+s[i].gujrati+s[i].maths)*100/400);
        if(per>35)
        {
            c1++;
            printf("\n %d \t %s \t %d \t %d \t%d \t%d \t%d \t %.2f %%  Pass",s[i].no,s[i].name,s[i].hindi,s[i].english,s[i].gujrati,s[i].maths,s[i].hindi+s[i].english+s[i].gujrati+s[i].maths,per);

        }
        else
        {
            c2++;
                printf("\n %d \t %s \t %d \t %d \t%d \t%d \t%d \t %.2f %%  fail",s[i].no,s[i].name,s[i].hindi,s[i].english,s[i].gujrati,s[i].maths,s[i].hindi+s[i].english+s[i].gujrati+s[i].maths,per);
        }
    }
    printf("\nnumber of pass students=>%d",c1);
    printf("\nnumber of fail students=>%d",c2);

 printf("\n 1 for Student who are pass in Exam");
 printf("\n 2 for Student who are fail in Exam");
 printf("\n 3 for All Student");
printf("\n Select Option from Above=");
 scanf("%d",&opt);
 for(i=0;i<n;i++)
 {
    per=((s[i].hindi+s[i].english+s[i].gujrati+s[i].maths)*100/400);
    if(opt==1)
    {
       if(per>=35)
       {
            printf("\n %d\t%s\t%d\t%d\t%d\t%d\t%d\t%.2f %%Pass",s[i].no,s[i].name,s[i].hindi,s[i].english,s[i].gujrati,s[i].maths,s[i].hindi+s[i].english+s[i].gujrati+s[i].maths,per);
       }
       
    }
    else if(opt==2)
    {
        if(per<35)
        {
            printf("\n %d\t%s\t%d\t%d\t%d\t%d\t%d\t%.2f %%fail",s[i].no,s[i].name,s[i].hindi,s[i].english,s[i].gujrati,s[i].maths,s[i].hindi+s[i].english+s[i].gujrati+s[i].maths,per);
        }
    }
    else if(opt==3)
    {
        printf("\n %d\t%s\t%d\t%d\t%d\t%d\t%d\t%.2f%% ",s[i].no,s[i].name,s[i].hindi,s[i].english,s[i].gujrati,s[i].maths,s[i].hindi+s[i].english+s[i].gujrati+s[i].maths,per);
    }
 }
}