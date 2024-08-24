#include<stdio.h>
int main()
{
    FILE *f1;
    char ch;
    int c=0;
    f1=fopen("c:\\Apps\\au.txt","r");
    while(ch!=EOF)
    {  
        ch=getc(f1);
        if(islower(ch))

        {
            printf("%c",toupper(ch));
        }
        else if(isupper(ch))
        {
            printf("%c",tolower(ch));
        }
        else
        {
            printf(" ");
        }
    }
    
    fclose(f1); 
    
return 0;
}