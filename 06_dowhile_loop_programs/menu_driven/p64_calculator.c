#include<stdio.h>
main()
{
 char opt;
 int no1,no2,i;
 float no3,no4;
 do
 {
 printf("\n ~Calculator~");
 printf("\n + for Addition");
 printf("\n - for Substraction");
 printf("\n / for Division");
 printf("\n * for Multiclation");
 printf("\n # For Exit Program");
 fflush(stdin);
 printf("\n Select Option");
 scanf("%c",&opt);
 if(opt=='+'){
 printf("\n Enter No.1=> ");
 scanf("%d",&no1);
 printf("\n Enter No.2=> ");
 scanf("%d",&no2);
 printf("\n Addition is %d",no1+no2);
 i++;
 }
 else if(opt=='-'){
 printf("\n Enter No.1=> ");
 scanf("%d",&no1);
 printf("\n Enter No.2=> ");
 scanf("%d",&no2);
 printf("\n Substratiob is %d",no1-no2);
 i++;
 }
 else if(opt=='*'){
 printf("\n Enter No.1=> ");
 scanf("%f",&no3);
 printf("\n Enter No.2=> ");
 scanf("%f",&no4);
 printf("\n Multiplication is %f",no3*no4);
 i++;
 }
 else if(opt=='/'){
 printf("\n Enter No.1=> ");
 scanf("%f",&no3);
 printf("\n Enter No.2=> ");
 scanf("%f",&no4);
 printf("\n Division is %f",no3/no4);
 i++;
 }
 else if(opt=='#')
 {
 printf("\n See you Soon");
 }
 else{
 printf("\n Wrong Option");
 }
 
 printf("\n");
 }
 while(opt!='#');
}
