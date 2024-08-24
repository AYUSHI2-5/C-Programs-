#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *f1,*f2,*f3;
    char ch;
    f1=fopen("c:\\Apps\\lj.txt","r");
    f2=fopen("c:\\Apps\\lj2.txt","w");
    f3=fopen("c:\\Apps\\lj3.txt","w");

    while(ch!=EOF)
    {
        ch=getc(f1);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        {
           putc(ch,f3);
        }
        else
        {
            putc(ch,f2);
        }
       
    }
    printf("\ncopied");
    fclose(f1);
    
}