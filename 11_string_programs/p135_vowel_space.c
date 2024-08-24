#include<stdio.h>
#include<string.h>
main()
{
    int y,i;
    char name [200],ch;
    printf("\n enter name:");
    gets(name);

   
    y=strlen(name);
    
    for(i=0;i<y;i++)
    {
        ch=name[i];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
     {
           printf(" ");
 
            
    }
    else
    {
           printf("%c",ch);
           
    }
    
}
}