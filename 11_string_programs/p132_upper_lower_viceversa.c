#include<stdio.h>
#include<string.h>
main()
{
    int y,i,cnt=0,k=0;
    char name [200],ch;
    printf("\n enter name:");
    gets(name);

   
    y=strlen(name);
    
    for(i=0;i<y;i++)
    {
        ch=name[i];
        if(islower(ch))
    {
           
        printf("%c",toupper(ch));
        k++;
        
    }
    else if (isupper(ch))
    {
        printf("%c",tolower(ch)); 
        cnt++;
    }
    }
    printf("\nCntof upper = %d",cnt);
    printf("\nCntof lower = %d",k);

}