#include<stdio.h>
#include<string.h>
main()
{
    int y;
    char n1[200],ch;
    char n2[200];
     printf("\n Enter your name =");
    scanf("%s",&n1);
    y=strlen(n1);
    printf("\n Enter your name =");
    scanf("%s",&n2);
    y=strlen(n2);
     strcat(n1,n2);
     printf("\n %s",n1);
     printf("\n %s",n2);
}