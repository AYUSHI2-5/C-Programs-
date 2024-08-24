#include<stdio.h>
#include<string.h>
main()
{
     int y,i;
    char name [200],ch;
    printf("\n enter name:");
      scanf("%s",&name);

    printf("\n name=%s",name);

    y=strlen(name);
    printf("\n len=%d",y);
    
      
    for(i=0;i<y;i++)
    {
        ch=name[i];
        printf("\n%c",ch);
    }
   
}