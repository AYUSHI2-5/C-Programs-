#include<stdio.h>

struct book{
    int bno;
    char bname[200];
   int bprice;
};
main()
{

    struct book b[100];
    int n,i;

    printf("\nEnter limit =>");
    scanf("%d",&n);


    for(i=0;i<n;i++)
    {
        printf("\nEnter b1's no=>");
        scanf("%d",&b[i].bno);
        printf("\nEnter b1's price=>");
        scanf("%d",&b[i].bprice);

        fflush(stdin);
        printf("\nEnter s1.s sname=>");
        gets(b[i].bname);
    }

    printf("\nNo\tname\tprice");
    printf("\n========================");
    for(i=0;i<n;i++)

    {  
        
        printf("\n%d\t%d\t%s",b[i].bno,b[i].bprice,b[i].bname);
        if(b[i].bprice>300)
       {
        printf("\tit is costly") ;
       
       }
       else
       {
        printf("\ti can buy it");
       } 
        
           
        
    }
    return 0;



}