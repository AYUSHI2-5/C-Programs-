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
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
            c++;
        }
        else
        {
            printf("%c",ch);
        }
    }
    
    fclose(f1); 
    
return 0;
}