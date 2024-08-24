#include<stdio.h>
#include<string.h>
main()
{
    int y,i,ch;
    char name[200];

    printf("\n enter name:");
    gets(name);
    y=strlen(name);
    
    for(i=y-1;i>=0;i--)
    {
         printf("%c",name[i]);

    }
    return 0;
    
}