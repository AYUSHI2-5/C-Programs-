#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *f1,*f2,*f3;
    char ch;
    f1=fopen("c:\\Apps\\lj.txt","r");
    f2=fopen("c:\\Apps\\lj4.txt","w");
    f3=fopen("c:\\Apps\\lj5.txt","w");

    while(ch!=EOF)
    {
        ch=getc(f1);
        if(isupper(ch))
        {
           putc(ch,f2);
        }
        else
        {
            putc(ch,f3);
        }
       
    }
    printf("\ncopied");
    fclose(f1);
    
}