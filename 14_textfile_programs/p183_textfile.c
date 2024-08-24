#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("c:\\Apps\\lj.txt","r");
    f2=fopen("c:\\Apps\\lj6.txt","w");
   
    while(ch!=EOF)
    {
        ch=getc(f1);
        if(ch==' ')
        {
           putc('7',f2);
        }
        else
        {
           putc(ch,f2);
        }
       
    }
    printf("\ncopied");
    fclose(f1);
    
}