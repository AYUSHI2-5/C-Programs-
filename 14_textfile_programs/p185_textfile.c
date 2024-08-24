#include<stdio.h>
#include<ctype.h>
main()
{
    FILE *f1,*f2,*f3;
    char ch1,ch2;
    f1=fopen("c:\\Apps\\lj.txt","r");
    f2=fopen("c:\\Apps\\lj3.txt","r");
    f3=fopen("c:\\Apps\\lj8.txt","w");

    while(ch1!=EOF)
    {
        ch1=getc(f1);
        putc(ch1,f3);
    }
     while(ch2!=EOF)
    {
        ch2=getc(f2);
        putc(ch2,f3);
    }
   
    fclose(f1);
    printf("\ncopied");
    return 0;
}