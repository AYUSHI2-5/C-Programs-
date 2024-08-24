#include<stdio.h>
void add()

{
    int n1,n2,total;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);
    printf("\nEnter second number=");
    scanf("%d",&n2);
    
    printf("\n sum of both the digits=%d",n1+n2);
    printf("\n*************************");


}
void max2()
{
    int n1,n2,total;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);
    printf("\nEnter second number=");
    scanf("%d",&n2);
    
    n1>n2?printf("\n n1 is greater "):printf("\n n2 is greater ");
    printf("\n*************************");
}
void table()
{
    int n1,i;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);

    for(i=1;i<=10;i++)
    {
        printf("\n %dx%d=%d",n1,i,n1*i);
    }
    printf("\n*************************");
  
}
void max3()
{
    int n1,n2,n3;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%d",&n1);
    printf("\nEnter second number=");
    scanf("%d",&n2);
    printf("\nEnter third number=");
    scanf("%d",&n3);
    if(n1>n2 && n1>n3)
    {
        printf("\n n1 is greater");
    }
    else if(n2>n1 && n2>n3)
    {
        printf("\n n2 is greater");

    }
    else if(n3>n1 && n3>n2)
    {
         printf("\n n3 is greater");
    }
    printf("\n*************************");
    
    
}
void area()
{
    float b,l;
    printf("\n*************************");
    printf("\nEnter first number=");
    scanf("%f",&l);
    printf("\nEnter second number=");
    scanf("%f",&b);
    printf("\n area of triangle =%f",l*b*0.5);
    printf("\n*************************");
}
void area1()
{
    float r;
    printf("\n*************************");
    printf("\nEnter value of r=");
    scanf("%f",&r);
    printf("\n total area of circle =%f",r*r*3.14);
    printf("\n*************************");

}
void oddeven()
{
    int no;
    printf("\n*************************");
    printf("\nEnetr number =");
    scanf("%d",&no);

    if(no%2==0)
    {
        printf("\n number is even");
    }
    else
    {
        printf("\n number is odd");
    }
    printf("\n*************************");
}
void negpos()
{
     int no;
     printf("\n*************************");
    printf("\nEnetr number =");
    scanf("%d",&no);

    if(no>0)
    {
        printf("\n number is positive");
    }
    else
    {
        printf("\n number is negative");
    }
    printf("\n*************************");
}
void cube()
{
     int no;
     printf("\n*************************");
    printf("\nEnetr number =");
    scanf("%d",&no);
    printf("\n cube of number=%d",no*no*no);
    printf("\n*************************");
}
void fact()
{
    int no,i,s=1,a;
    printf("\n*************************");
    printf("\nEnetr number =");
    scanf("%d",&a);
    no=a;
    for(i=no;i>=1;i--)
    {
    printf("%dx",i);
    s=s*i;
    }
    printf("\n sum of factors=%d",s);
    printf("\n*************************");
}
main()
{
 int op;
 printf("\nPress 1 for max3");
 printf("\nPress 2 for add");
 printf("\nPress 3 for max2");
 printf("\nPress 4 for table");
 printf("\nPress 5 for oddeven");
 printf("\nPress 6 for negpos");
 printf("\nPress 7 for area of tri");
 printf("\nPress 8 for area of circle");
 printf("\nPress 9 for factorial");
 printf("\n press 10 for cube");
 

 scanf("%d",&op);

 if(op==1)
 { 
    max3();
 }
  else if(op==2)
 {
    add();
 }
 else if(op==3)
 {
    max2();
 }
 else if(op==4)
 {
    table();
 }
 else if(op==5)
 {
    oddeven();
 }
 else if(op==6)
 {
    negpos();
 }
else  if(op==7)
 {
    area();
 }
 else if(op==8)
 {
    area1();
 }
 else if(op==9)
 {
    fact();

 }
else if(op==10)
{
    cube();
}
    
    
}