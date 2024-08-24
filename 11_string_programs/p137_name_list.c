#include<stdio.h>
#include<string.h>
main()
{
    int y,i,ch;
    char name[200];
    char name1[200]={""};

    printf("\n enter name:");
    gets(name);
    y=strlen(name);
    
    for(i=0;i<y;i++)
    {
    name1[i]=name[i];
    }
      printf(" %s",name1);
   

    return 0;
    
}