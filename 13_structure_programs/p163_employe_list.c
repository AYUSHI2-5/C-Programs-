#include<stdio.h>

struct employ{
    int eno;
    int esal;
    char ename[200];

};
int main()

{
    struct employ e1,e2,e3;

    printf("\nEnter e's no=>");
    scanf("%d",&e1.eno);
    
    printf("\nEnter salary no=>");
    scanf("%d",&e1.esal);
    
    fflush(stdin);
    printf("\nEnter e1's sname=>");
    gets(e1.ename);

    printf("\nEnter e2's no=>");
    scanf("%d",&e2.eno);
    printf("\nEnter e2's salary=>");
    scanf("%d",&e2.esal);

    fflush(stdin);
    printf("\nEnter e2's name=>");
    gets(e2.ename);
    
    printf("\nEnter e3's no=>");
    scanf("%d",&e3.eno);
    printf("\nEnter e3's salary=>");
    scanf("%d",&e3.esal);

    fflush(stdin);
    printf("\nEnter e3.s ename=>");
    gets(e3.ename);
    
    printf("\n no = %d name = %s salary=%d",e1.eno,e1.ename,e1.esal);
    printf("\n no = %d name = %s salary=%d",e2.eno,e2.ename,e2.esal);
    printf("\n no = %d name = %s salary=%d",e3.eno,e3.ename,e3.esal);
    
    return 0;



}