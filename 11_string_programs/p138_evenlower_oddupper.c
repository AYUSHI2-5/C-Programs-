#include<stdio.h>
#include<string.h>
main()
{
    int y,i,ch;
    char name[200];

    printf("\n enter name:");
    gets(name);
    y=strlen(name);
    
    for(i=0;i<y;i++)
    {
         if(i%2==0)
         {
            printf("%c",tolower(name[i]));
         }
         else 
         {
            printf("%c",toupper(name[i]));
         }
    }
    return 0;
    
}